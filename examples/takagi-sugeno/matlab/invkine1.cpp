#include <fl/Headers.h>

int main(int argc, char** argv){
fl::Engine* engine = new fl::Engine;
engine->setName("invkine1");

fl::InputVariable* inputVariable1 = new fl::InputVariable;
inputVariable1->setEnabled(true);
inputVariable1->setName("input1");
inputVariable1->setRange(-6.287, 17.000);
inputVariable1->addTerm(new fl::Bell("in1mf1", -6.122, 2.259, 1.761));
inputVariable1->addTerm(new fl::Bell("in1mf2", -2.181, 2.095, 2.232));
inputVariable1->addTerm(new fl::Bell("in1mf3", 2.080, 2.157, 1.314));
inputVariable1->addTerm(new fl::Bell("in1mf4", 4.962, 2.790, 2.508));
inputVariable1->addTerm(new fl::Bell("in1mf5", 9.338, 2.506, 1.812));
inputVariable1->addTerm(new fl::Bell("in1mf6", 13.150, 2.363, 2.267));
inputVariable1->addTerm(new fl::Bell("in1mf7", 17.789, 1.310, 1.756));
engine->addInputVariable(inputVariable1);

fl::InputVariable* inputVariable2 = new fl::InputVariable;
inputVariable2->setEnabled(true);
inputVariable2->setName("input2");
inputVariable2->setRange(0.000, 16.972);
inputVariable2->addTerm(new fl::Bell("in2mf1", 0.621, 1.741, 2.454));
inputVariable2->addTerm(new fl::Bell("in2mf2", 2.406, 0.866, 1.278));
inputVariable2->addTerm(new fl::Bell("in2mf3", 4.883, 1.814, 2.402));
inputVariable2->addTerm(new fl::Bell("in2mf4", 8.087, 1.941, 1.929));
inputVariable2->addTerm(new fl::Bell("in2mf5", 11.428, 2.333, 2.022));
inputVariable2->addTerm(new fl::Bell("in2mf6", 14.579, 2.221, 1.858));
inputVariable2->addTerm(new fl::Bell("in2mf7", 17.813, 0.820, 1.577));
engine->addInputVariable(inputVariable2);

fl::OutputVariable* outputVariable = new fl::OutputVariable;
outputVariable->setEnabled(true);
outputVariable->setName("output");
outputVariable->setRange(0.000, 1.500);
outputVariable->fuzzyOutput()->setAccumulation(new fl::Maximum);
outputVariable->setDefuzzifier(new fl::WeightedAverage);
outputVariable->setDefaultValue(fl::nan);
outputVariable->setLockValidOutput(false);
outputVariable->setLockOutputRange(false);
outputVariable->addTerm(fl::Linear::create("out1mf1", engine->inputVariables(), -0.912, 2.517, 0.061));
outputVariable->addTerm(fl::Linear::create("out1mf2", engine->inputVariables(), -2.153, -2.204, -4.037));
outputVariable->addTerm(fl::Linear::create("out1mf3", engine->inputVariables(), -0.107, -0.148, 1.920));
outputVariable->addTerm(fl::Linear::create("out1mf4", engine->inputVariables(), -0.088, -0.071, 1.593));
outputVariable->addTerm(fl::Linear::create("out1mf5", engine->inputVariables(), -0.098, -0.040, 1.361));
outputVariable->addTerm(fl::Linear::create("out1mf6", engine->inputVariables(), -0.068, -0.027, 1.617));
outputVariable->addTerm(fl::Linear::create("out1mf7", engine->inputVariables(), -1.901, -0.081, 0.185));
outputVariable->addTerm(fl::Linear::create("out1mf8", engine->inputVariables(), 16.651, 11.713, 6.803));
outputVariable->addTerm(fl::Linear::create("out1mf9", engine->inputVariables(), -4.152, -1.033, -4.755));
outputVariable->addTerm(fl::Linear::create("out1mf10", engine->inputVariables(), -0.123, 0.004, 0.861));
outputVariable->addTerm(fl::Linear::create("out1mf11", engine->inputVariables(), -0.102, 0.006, 0.816));
outputVariable->addTerm(fl::Linear::create("out1mf12", engine->inputVariables(), -0.089, 0.038, 0.515));
outputVariable->addTerm(fl::Linear::create("out1mf13", engine->inputVariables(), -0.074, 0.082, -0.061));
outputVariable->addTerm(fl::Linear::create("out1mf14", engine->inputVariables(), -0.009, -0.173, 4.841));
outputVariable->addTerm(fl::Linear::create("out1mf15", engine->inputVariables(), -7.995, -2.818, 17.910));
outputVariable->addTerm(fl::Linear::create("out1mf16", engine->inputVariables(), 0.674, 0.745, -2.167));
outputVariable->addTerm(fl::Linear::create("out1mf17", engine->inputVariables(), -0.130, -0.004, 0.869));
outputVariable->addTerm(fl::Linear::create("out1mf18", engine->inputVariables(), -0.094, 0.061, 0.366));
outputVariable->addTerm(fl::Linear::create("out1mf19", engine->inputVariables(), -0.087, 0.121, -0.395));
outputVariable->addTerm(fl::Linear::create("out1mf20", engine->inputVariables(), -0.061, 0.162, -1.312));
outputVariable->addTerm(fl::Linear::create("out1mf21", engine->inputVariables(), -0.163, 0.920, -13.253));
outputVariable->addTerm(fl::Linear::create("out1mf22", engine->inputVariables(), 1.417, 3.072, 1.881));
outputVariable->addTerm(fl::Linear::create("out1mf23", engine->inputVariables(), -0.950, -0.732, 3.128));
outputVariable->addTerm(fl::Linear::create("out1mf24", engine->inputVariables(), -0.058, 0.162, -0.530));
outputVariable->addTerm(fl::Linear::create("out1mf25", engine->inputVariables(), -0.044, 0.077, -0.121));
outputVariable->addTerm(fl::Linear::create("out1mf26", engine->inputVariables(), -0.061, 0.054, 0.273));
outputVariable->addTerm(fl::Linear::create("out1mf27", engine->inputVariables(), -0.068, 0.099, -0.250));
outputVariable->addTerm(fl::Linear::create("out1mf28", engine->inputVariables(), 0.429, 0.610, -9.118));
outputVariable->addTerm(fl::Linear::create("out1mf29", engine->inputVariables(), -6.661, -3.697, 0.015));
outputVariable->addTerm(fl::Linear::create("out1mf30", engine->inputVariables(), -3.544, 8.995, 0.396));
outputVariable->addTerm(fl::Linear::create("out1mf31", engine->inputVariables(), 0.210, -0.137, -1.010));
outputVariable->addTerm(fl::Linear::create("out1mf32", engine->inputVariables(), -0.003, 0.137, -1.210));
outputVariable->addTerm(fl::Linear::create("out1mf33", engine->inputVariables(), -0.030, 0.018, 0.107));
outputVariable->addTerm(fl::Linear::create("out1mf34", engine->inputVariables(), -0.227, -0.306, 6.550));
outputVariable->addTerm(fl::Linear::create("out1mf35", engine->inputVariables(), 11.005, -3.375, -1.135));
outputVariable->addTerm(fl::Linear::create("out1mf36", engine->inputVariables(), 0.578, 0.033, -0.104));
outputVariable->addTerm(fl::Linear::create("out1mf37", engine->inputVariables(), 0.895, -3.268, -0.992));
outputVariable->addTerm(fl::Linear::create("out1mf38", engine->inputVariables(), 0.125, 0.006, -1.733));
outputVariable->addTerm(fl::Linear::create("out1mf39", engine->inputVariables(), 0.044, 0.003, -0.303));
outputVariable->addTerm(fl::Linear::create("out1mf40", engine->inputVariables(), -0.179, -0.093, 3.458));
outputVariable->addTerm(fl::Linear::create("out1mf41", engine->inputVariables(), 0.222, 0.597, -10.102));
outputVariable->addTerm(fl::Linear::create("out1mf42", engine->inputVariables(), 9.320, 13.692, 0.858));
outputVariable->addTerm(fl::Linear::create("out1mf43", engine->inputVariables(), 0.161, -0.117, -1.382));
outputVariable->addTerm(fl::Linear::create("out1mf44", engine->inputVariables(), 0.495, -0.833, -6.564));
outputVariable->addTerm(fl::Linear::create("out1mf45", engine->inputVariables(), 0.465, -0.787, -5.610));
outputVariable->addTerm(fl::Linear::create("out1mf46", engine->inputVariables(), 1.334, -3.017, -2.871));
outputVariable->addTerm(fl::Linear::create("out1mf47", engine->inputVariables(), 2.561, -0.864, -0.557));
outputVariable->addTerm(fl::Linear::create("out1mf48", engine->inputVariables(), 17.123, 11.150, 1.006));
outputVariable->addTerm(fl::Linear::create("out1mf49", engine->inputVariables(), 0.220, 0.154, 0.010));
engine->addOutputVariable(outputVariable);

fl::RuleBlock* ruleBlock = new fl::RuleBlock;
ruleBlock->setEnabled(true);
ruleBlock->setName("");
ruleBlock->setConjunction(new fl::AlgebraicProduct);
ruleBlock->setDisjunction(new fl::Maximum);
ruleBlock->setActivation(new fl::AlgebraicProduct);
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf1 then output is out1mf1", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf2 then output is out1mf2", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf3 then output is out1mf3", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf4 then output is out1mf4", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf5 then output is out1mf5", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf6 then output is out1mf6", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf1 and input2 is in2mf7 then output is out1mf7", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf1 then output is out1mf8", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf2 then output is out1mf9", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf3 then output is out1mf10", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf4 then output is out1mf11", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf5 then output is out1mf12", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf6 then output is out1mf13", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf2 and input2 is in2mf7 then output is out1mf14", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf1 then output is out1mf15", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf2 then output is out1mf16", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf3 then output is out1mf17", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf4 then output is out1mf18", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf5 then output is out1mf19", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf6 then output is out1mf20", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf3 and input2 is in2mf7 then output is out1mf21", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf1 then output is out1mf22", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf2 then output is out1mf23", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf3 then output is out1mf24", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf4 then output is out1mf25", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf5 then output is out1mf26", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf6 then output is out1mf27", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf4 and input2 is in2mf7 then output is out1mf28", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf1 then output is out1mf29", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf2 then output is out1mf30", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf3 then output is out1mf31", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf4 then output is out1mf32", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf5 then output is out1mf33", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf6 then output is out1mf34", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf5 and input2 is in2mf7 then output is out1mf35", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf1 then output is out1mf36", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf2 then output is out1mf37", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf3 then output is out1mf38", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf4 then output is out1mf39", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf5 then output is out1mf40", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf6 then output is out1mf41", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf6 and input2 is in2mf7 then output is out1mf42", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf1 then output is out1mf43", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf2 then output is out1mf44", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf3 then output is out1mf45", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf4 then output is out1mf46", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf5 then output is out1mf47", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf6 then output is out1mf48", engine));
ruleBlock->addRule(fl::Rule::parse("if input1 is in1mf7 and input2 is in2mf7 then output is out1mf49", engine));
engine->addRuleBlock(ruleBlock);


}
