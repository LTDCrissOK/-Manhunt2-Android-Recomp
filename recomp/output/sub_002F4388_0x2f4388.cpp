#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F4388
// Address: 0x2f4388 - 0x2f4d18
void sub_002F4388_0x2f4388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4388_0x2f4388");
#endif

    switch (ctx->pc) {
        case 0x2f4388u: goto label_2f4388;
        case 0x2f438cu: goto label_2f438c;
        case 0x2f4390u: goto label_2f4390;
        case 0x2f4394u: goto label_2f4394;
        case 0x2f4398u: goto label_2f4398;
        case 0x2f439cu: goto label_2f439c;
        case 0x2f43a0u: goto label_2f43a0;
        case 0x2f43a4u: goto label_2f43a4;
        case 0x2f43a8u: goto label_2f43a8;
        case 0x2f43acu: goto label_2f43ac;
        case 0x2f43b0u: goto label_2f43b0;
        case 0x2f43b4u: goto label_2f43b4;
        case 0x2f43b8u: goto label_2f43b8;
        case 0x2f43bcu: goto label_2f43bc;
        case 0x2f43c0u: goto label_2f43c0;
        case 0x2f43c4u: goto label_2f43c4;
        case 0x2f43c8u: goto label_2f43c8;
        case 0x2f43ccu: goto label_2f43cc;
        case 0x2f43d0u: goto label_2f43d0;
        case 0x2f43d4u: goto label_2f43d4;
        case 0x2f43d8u: goto label_2f43d8;
        case 0x2f43dcu: goto label_2f43dc;
        case 0x2f43e0u: goto label_2f43e0;
        case 0x2f43e4u: goto label_2f43e4;
        case 0x2f43e8u: goto label_2f43e8;
        case 0x2f43ecu: goto label_2f43ec;
        case 0x2f43f0u: goto label_2f43f0;
        case 0x2f43f4u: goto label_2f43f4;
        case 0x2f43f8u: goto label_2f43f8;
        case 0x2f43fcu: goto label_2f43fc;
        case 0x2f4400u: goto label_2f4400;
        case 0x2f4404u: goto label_2f4404;
        case 0x2f4408u: goto label_2f4408;
        case 0x2f440cu: goto label_2f440c;
        case 0x2f4410u: goto label_2f4410;
        case 0x2f4414u: goto label_2f4414;
        case 0x2f4418u: goto label_2f4418;
        case 0x2f441cu: goto label_2f441c;
        case 0x2f4420u: goto label_2f4420;
        case 0x2f4424u: goto label_2f4424;
        case 0x2f4428u: goto label_2f4428;
        case 0x2f442cu: goto label_2f442c;
        case 0x2f4430u: goto label_2f4430;
        case 0x2f4434u: goto label_2f4434;
        case 0x2f4438u: goto label_2f4438;
        case 0x2f443cu: goto label_2f443c;
        case 0x2f4440u: goto label_2f4440;
        case 0x2f4444u: goto label_2f4444;
        case 0x2f4448u: goto label_2f4448;
        case 0x2f444cu: goto label_2f444c;
        case 0x2f4450u: goto label_2f4450;
        case 0x2f4454u: goto label_2f4454;
        case 0x2f4458u: goto label_2f4458;
        case 0x2f445cu: goto label_2f445c;
        case 0x2f4460u: goto label_2f4460;
        case 0x2f4464u: goto label_2f4464;
        case 0x2f4468u: goto label_2f4468;
        case 0x2f446cu: goto label_2f446c;
        case 0x2f4470u: goto label_2f4470;
        case 0x2f4474u: goto label_2f4474;
        case 0x2f4478u: goto label_2f4478;
        case 0x2f447cu: goto label_2f447c;
        case 0x2f4480u: goto label_2f4480;
        case 0x2f4484u: goto label_2f4484;
        case 0x2f4488u: goto label_2f4488;
        case 0x2f448cu: goto label_2f448c;
        case 0x2f4490u: goto label_2f4490;
        case 0x2f4494u: goto label_2f4494;
        case 0x2f4498u: goto label_2f4498;
        case 0x2f449cu: goto label_2f449c;
        case 0x2f44a0u: goto label_2f44a0;
        case 0x2f44a4u: goto label_2f44a4;
        case 0x2f44a8u: goto label_2f44a8;
        case 0x2f44acu: goto label_2f44ac;
        case 0x2f44b0u: goto label_2f44b0;
        case 0x2f44b4u: goto label_2f44b4;
        case 0x2f44b8u: goto label_2f44b8;
        case 0x2f44bcu: goto label_2f44bc;
        case 0x2f44c0u: goto label_2f44c0;
        case 0x2f44c4u: goto label_2f44c4;
        case 0x2f44c8u: goto label_2f44c8;
        case 0x2f44ccu: goto label_2f44cc;
        case 0x2f44d0u: goto label_2f44d0;
        case 0x2f44d4u: goto label_2f44d4;
        case 0x2f44d8u: goto label_2f44d8;
        case 0x2f44dcu: goto label_2f44dc;
        case 0x2f44e0u: goto label_2f44e0;
        case 0x2f44e4u: goto label_2f44e4;
        case 0x2f44e8u: goto label_2f44e8;
        case 0x2f44ecu: goto label_2f44ec;
        case 0x2f44f0u: goto label_2f44f0;
        case 0x2f44f4u: goto label_2f44f4;
        case 0x2f44f8u: goto label_2f44f8;
        case 0x2f44fcu: goto label_2f44fc;
        case 0x2f4500u: goto label_2f4500;
        case 0x2f4504u: goto label_2f4504;
        case 0x2f4508u: goto label_2f4508;
        case 0x2f450cu: goto label_2f450c;
        case 0x2f4510u: goto label_2f4510;
        case 0x2f4514u: goto label_2f4514;
        case 0x2f4518u: goto label_2f4518;
        case 0x2f451cu: goto label_2f451c;
        case 0x2f4520u: goto label_2f4520;
        case 0x2f4524u: goto label_2f4524;
        case 0x2f4528u: goto label_2f4528;
        case 0x2f452cu: goto label_2f452c;
        case 0x2f4530u: goto label_2f4530;
        case 0x2f4534u: goto label_2f4534;
        case 0x2f4538u: goto label_2f4538;
        case 0x2f453cu: goto label_2f453c;
        case 0x2f4540u: goto label_2f4540;
        case 0x2f4544u: goto label_2f4544;
        case 0x2f4548u: goto label_2f4548;
        case 0x2f454cu: goto label_2f454c;
        case 0x2f4550u: goto label_2f4550;
        case 0x2f4554u: goto label_2f4554;
        case 0x2f4558u: goto label_2f4558;
        case 0x2f455cu: goto label_2f455c;
        case 0x2f4560u: goto label_2f4560;
        case 0x2f4564u: goto label_2f4564;
        case 0x2f4568u: goto label_2f4568;
        case 0x2f456cu: goto label_2f456c;
        case 0x2f4570u: goto label_2f4570;
        case 0x2f4574u: goto label_2f4574;
        case 0x2f4578u: goto label_2f4578;
        case 0x2f457cu: goto label_2f457c;
        case 0x2f4580u: goto label_2f4580;
        case 0x2f4584u: goto label_2f4584;
        case 0x2f4588u: goto label_2f4588;
        case 0x2f458cu: goto label_2f458c;
        case 0x2f4590u: goto label_2f4590;
        case 0x2f4594u: goto label_2f4594;
        case 0x2f4598u: goto label_2f4598;
        case 0x2f459cu: goto label_2f459c;
        case 0x2f45a0u: goto label_2f45a0;
        case 0x2f45a4u: goto label_2f45a4;
        case 0x2f45a8u: goto label_2f45a8;
        case 0x2f45acu: goto label_2f45ac;
        case 0x2f45b0u: goto label_2f45b0;
        case 0x2f45b4u: goto label_2f45b4;
        case 0x2f45b8u: goto label_2f45b8;
        case 0x2f45bcu: goto label_2f45bc;
        case 0x2f45c0u: goto label_2f45c0;
        case 0x2f45c4u: goto label_2f45c4;
        case 0x2f45c8u: goto label_2f45c8;
        case 0x2f45ccu: goto label_2f45cc;
        case 0x2f45d0u: goto label_2f45d0;
        case 0x2f45d4u: goto label_2f45d4;
        case 0x2f45d8u: goto label_2f45d8;
        case 0x2f45dcu: goto label_2f45dc;
        case 0x2f45e0u: goto label_2f45e0;
        case 0x2f45e4u: goto label_2f45e4;
        case 0x2f45e8u: goto label_2f45e8;
        case 0x2f45ecu: goto label_2f45ec;
        case 0x2f45f0u: goto label_2f45f0;
        case 0x2f45f4u: goto label_2f45f4;
        case 0x2f45f8u: goto label_2f45f8;
        case 0x2f45fcu: goto label_2f45fc;
        case 0x2f4600u: goto label_2f4600;
        case 0x2f4604u: goto label_2f4604;
        case 0x2f4608u: goto label_2f4608;
        case 0x2f460cu: goto label_2f460c;
        case 0x2f4610u: goto label_2f4610;
        case 0x2f4614u: goto label_2f4614;
        case 0x2f4618u: goto label_2f4618;
        case 0x2f461cu: goto label_2f461c;
        case 0x2f4620u: goto label_2f4620;
        case 0x2f4624u: goto label_2f4624;
        case 0x2f4628u: goto label_2f4628;
        case 0x2f462cu: goto label_2f462c;
        case 0x2f4630u: goto label_2f4630;
        case 0x2f4634u: goto label_2f4634;
        case 0x2f4638u: goto label_2f4638;
        case 0x2f463cu: goto label_2f463c;
        case 0x2f4640u: goto label_2f4640;
        case 0x2f4644u: goto label_2f4644;
        case 0x2f4648u: goto label_2f4648;
        case 0x2f464cu: goto label_2f464c;
        case 0x2f4650u: goto label_2f4650;
        case 0x2f4654u: goto label_2f4654;
        case 0x2f4658u: goto label_2f4658;
        case 0x2f465cu: goto label_2f465c;
        case 0x2f4660u: goto label_2f4660;
        case 0x2f4664u: goto label_2f4664;
        case 0x2f4668u: goto label_2f4668;
        case 0x2f466cu: goto label_2f466c;
        case 0x2f4670u: goto label_2f4670;
        case 0x2f4674u: goto label_2f4674;
        case 0x2f4678u: goto label_2f4678;
        case 0x2f467cu: goto label_2f467c;
        case 0x2f4680u: goto label_2f4680;
        case 0x2f4684u: goto label_2f4684;
        case 0x2f4688u: goto label_2f4688;
        case 0x2f468cu: goto label_2f468c;
        case 0x2f4690u: goto label_2f4690;
        case 0x2f4694u: goto label_2f4694;
        case 0x2f4698u: goto label_2f4698;
        case 0x2f469cu: goto label_2f469c;
        case 0x2f46a0u: goto label_2f46a0;
        case 0x2f46a4u: goto label_2f46a4;
        case 0x2f46a8u: goto label_2f46a8;
        case 0x2f46acu: goto label_2f46ac;
        case 0x2f46b0u: goto label_2f46b0;
        case 0x2f46b4u: goto label_2f46b4;
        case 0x2f46b8u: goto label_2f46b8;
        case 0x2f46bcu: goto label_2f46bc;
        case 0x2f46c0u: goto label_2f46c0;
        case 0x2f46c4u: goto label_2f46c4;
        case 0x2f46c8u: goto label_2f46c8;
        case 0x2f46ccu: goto label_2f46cc;
        case 0x2f46d0u: goto label_2f46d0;
        case 0x2f46d4u: goto label_2f46d4;
        case 0x2f46d8u: goto label_2f46d8;
        case 0x2f46dcu: goto label_2f46dc;
        case 0x2f46e0u: goto label_2f46e0;
        case 0x2f46e4u: goto label_2f46e4;
        case 0x2f46e8u: goto label_2f46e8;
        case 0x2f46ecu: goto label_2f46ec;
        case 0x2f46f0u: goto label_2f46f0;
        case 0x2f46f4u: goto label_2f46f4;
        case 0x2f46f8u: goto label_2f46f8;
        case 0x2f46fcu: goto label_2f46fc;
        case 0x2f4700u: goto label_2f4700;
        case 0x2f4704u: goto label_2f4704;
        case 0x2f4708u: goto label_2f4708;
        case 0x2f470cu: goto label_2f470c;
        case 0x2f4710u: goto label_2f4710;
        case 0x2f4714u: goto label_2f4714;
        case 0x2f4718u: goto label_2f4718;
        case 0x2f471cu: goto label_2f471c;
        case 0x2f4720u: goto label_2f4720;
        case 0x2f4724u: goto label_2f4724;
        case 0x2f4728u: goto label_2f4728;
        case 0x2f472cu: goto label_2f472c;
        case 0x2f4730u: goto label_2f4730;
        case 0x2f4734u: goto label_2f4734;
        case 0x2f4738u: goto label_2f4738;
        case 0x2f473cu: goto label_2f473c;
        case 0x2f4740u: goto label_2f4740;
        case 0x2f4744u: goto label_2f4744;
        case 0x2f4748u: goto label_2f4748;
        case 0x2f474cu: goto label_2f474c;
        case 0x2f4750u: goto label_2f4750;
        case 0x2f4754u: goto label_2f4754;
        case 0x2f4758u: goto label_2f4758;
        case 0x2f475cu: goto label_2f475c;
        case 0x2f4760u: goto label_2f4760;
        case 0x2f4764u: goto label_2f4764;
        case 0x2f4768u: goto label_2f4768;
        case 0x2f476cu: goto label_2f476c;
        case 0x2f4770u: goto label_2f4770;
        case 0x2f4774u: goto label_2f4774;
        case 0x2f4778u: goto label_2f4778;
        case 0x2f477cu: goto label_2f477c;
        case 0x2f4780u: goto label_2f4780;
        case 0x2f4784u: goto label_2f4784;
        case 0x2f4788u: goto label_2f4788;
        case 0x2f478cu: goto label_2f478c;
        case 0x2f4790u: goto label_2f4790;
        case 0x2f4794u: goto label_2f4794;
        case 0x2f4798u: goto label_2f4798;
        case 0x2f479cu: goto label_2f479c;
        case 0x2f47a0u: goto label_2f47a0;
        case 0x2f47a4u: goto label_2f47a4;
        case 0x2f47a8u: goto label_2f47a8;
        case 0x2f47acu: goto label_2f47ac;
        case 0x2f47b0u: goto label_2f47b0;
        case 0x2f47b4u: goto label_2f47b4;
        case 0x2f47b8u: goto label_2f47b8;
        case 0x2f47bcu: goto label_2f47bc;
        case 0x2f47c0u: goto label_2f47c0;
        case 0x2f47c4u: goto label_2f47c4;
        case 0x2f47c8u: goto label_2f47c8;
        case 0x2f47ccu: goto label_2f47cc;
        case 0x2f47d0u: goto label_2f47d0;
        case 0x2f47d4u: goto label_2f47d4;
        case 0x2f47d8u: goto label_2f47d8;
        case 0x2f47dcu: goto label_2f47dc;
        case 0x2f47e0u: goto label_2f47e0;
        case 0x2f47e4u: goto label_2f47e4;
        case 0x2f47e8u: goto label_2f47e8;
        case 0x2f47ecu: goto label_2f47ec;
        case 0x2f47f0u: goto label_2f47f0;
        case 0x2f47f4u: goto label_2f47f4;
        case 0x2f47f8u: goto label_2f47f8;
        case 0x2f47fcu: goto label_2f47fc;
        case 0x2f4800u: goto label_2f4800;
        case 0x2f4804u: goto label_2f4804;
        case 0x2f4808u: goto label_2f4808;
        case 0x2f480cu: goto label_2f480c;
        case 0x2f4810u: goto label_2f4810;
        case 0x2f4814u: goto label_2f4814;
        case 0x2f4818u: goto label_2f4818;
        case 0x2f481cu: goto label_2f481c;
        case 0x2f4820u: goto label_2f4820;
        case 0x2f4824u: goto label_2f4824;
        case 0x2f4828u: goto label_2f4828;
        case 0x2f482cu: goto label_2f482c;
        case 0x2f4830u: goto label_2f4830;
        case 0x2f4834u: goto label_2f4834;
        case 0x2f4838u: goto label_2f4838;
        case 0x2f483cu: goto label_2f483c;
        case 0x2f4840u: goto label_2f4840;
        case 0x2f4844u: goto label_2f4844;
        case 0x2f4848u: goto label_2f4848;
        case 0x2f484cu: goto label_2f484c;
        case 0x2f4850u: goto label_2f4850;
        case 0x2f4854u: goto label_2f4854;
        case 0x2f4858u: goto label_2f4858;
        case 0x2f485cu: goto label_2f485c;
        case 0x2f4860u: goto label_2f4860;
        case 0x2f4864u: goto label_2f4864;
        case 0x2f4868u: goto label_2f4868;
        case 0x2f486cu: goto label_2f486c;
        case 0x2f4870u: goto label_2f4870;
        case 0x2f4874u: goto label_2f4874;
        case 0x2f4878u: goto label_2f4878;
        case 0x2f487cu: goto label_2f487c;
        case 0x2f4880u: goto label_2f4880;
        case 0x2f4884u: goto label_2f4884;
        case 0x2f4888u: goto label_2f4888;
        case 0x2f488cu: goto label_2f488c;
        case 0x2f4890u: goto label_2f4890;
        case 0x2f4894u: goto label_2f4894;
        case 0x2f4898u: goto label_2f4898;
        case 0x2f489cu: goto label_2f489c;
        case 0x2f48a0u: goto label_2f48a0;
        case 0x2f48a4u: goto label_2f48a4;
        case 0x2f48a8u: goto label_2f48a8;
        case 0x2f48acu: goto label_2f48ac;
        case 0x2f48b0u: goto label_2f48b0;
        case 0x2f48b4u: goto label_2f48b4;
        case 0x2f48b8u: goto label_2f48b8;
        case 0x2f48bcu: goto label_2f48bc;
        case 0x2f48c0u: goto label_2f48c0;
        case 0x2f48c4u: goto label_2f48c4;
        case 0x2f48c8u: goto label_2f48c8;
        case 0x2f48ccu: goto label_2f48cc;
        case 0x2f48d0u: goto label_2f48d0;
        case 0x2f48d4u: goto label_2f48d4;
        case 0x2f48d8u: goto label_2f48d8;
        case 0x2f48dcu: goto label_2f48dc;
        case 0x2f48e0u: goto label_2f48e0;
        case 0x2f48e4u: goto label_2f48e4;
        case 0x2f48e8u: goto label_2f48e8;
        case 0x2f48ecu: goto label_2f48ec;
        case 0x2f48f0u: goto label_2f48f0;
        case 0x2f48f4u: goto label_2f48f4;
        case 0x2f48f8u: goto label_2f48f8;
        case 0x2f48fcu: goto label_2f48fc;
        case 0x2f4900u: goto label_2f4900;
        case 0x2f4904u: goto label_2f4904;
        case 0x2f4908u: goto label_2f4908;
        case 0x2f490cu: goto label_2f490c;
        case 0x2f4910u: goto label_2f4910;
        case 0x2f4914u: goto label_2f4914;
        case 0x2f4918u: goto label_2f4918;
        case 0x2f491cu: goto label_2f491c;
        case 0x2f4920u: goto label_2f4920;
        case 0x2f4924u: goto label_2f4924;
        case 0x2f4928u: goto label_2f4928;
        case 0x2f492cu: goto label_2f492c;
        case 0x2f4930u: goto label_2f4930;
        case 0x2f4934u: goto label_2f4934;
        case 0x2f4938u: goto label_2f4938;
        case 0x2f493cu: goto label_2f493c;
        case 0x2f4940u: goto label_2f4940;
        case 0x2f4944u: goto label_2f4944;
        case 0x2f4948u: goto label_2f4948;
        case 0x2f494cu: goto label_2f494c;
        case 0x2f4950u: goto label_2f4950;
        case 0x2f4954u: goto label_2f4954;
        case 0x2f4958u: goto label_2f4958;
        case 0x2f495cu: goto label_2f495c;
        case 0x2f4960u: goto label_2f4960;
        case 0x2f4964u: goto label_2f4964;
        case 0x2f4968u: goto label_2f4968;
        case 0x2f496cu: goto label_2f496c;
        case 0x2f4970u: goto label_2f4970;
        case 0x2f4974u: goto label_2f4974;
        case 0x2f4978u: goto label_2f4978;
        case 0x2f497cu: goto label_2f497c;
        case 0x2f4980u: goto label_2f4980;
        case 0x2f4984u: goto label_2f4984;
        case 0x2f4988u: goto label_2f4988;
        case 0x2f498cu: goto label_2f498c;
        case 0x2f4990u: goto label_2f4990;
        case 0x2f4994u: goto label_2f4994;
        case 0x2f4998u: goto label_2f4998;
        case 0x2f499cu: goto label_2f499c;
        case 0x2f49a0u: goto label_2f49a0;
        case 0x2f49a4u: goto label_2f49a4;
        case 0x2f49a8u: goto label_2f49a8;
        case 0x2f49acu: goto label_2f49ac;
        case 0x2f49b0u: goto label_2f49b0;
        case 0x2f49b4u: goto label_2f49b4;
        case 0x2f49b8u: goto label_2f49b8;
        case 0x2f49bcu: goto label_2f49bc;
        case 0x2f49c0u: goto label_2f49c0;
        case 0x2f49c4u: goto label_2f49c4;
        case 0x2f49c8u: goto label_2f49c8;
        case 0x2f49ccu: goto label_2f49cc;
        case 0x2f49d0u: goto label_2f49d0;
        case 0x2f49d4u: goto label_2f49d4;
        case 0x2f49d8u: goto label_2f49d8;
        case 0x2f49dcu: goto label_2f49dc;
        case 0x2f49e0u: goto label_2f49e0;
        case 0x2f49e4u: goto label_2f49e4;
        case 0x2f49e8u: goto label_2f49e8;
        case 0x2f49ecu: goto label_2f49ec;
        case 0x2f49f0u: goto label_2f49f0;
        case 0x2f49f4u: goto label_2f49f4;
        case 0x2f49f8u: goto label_2f49f8;
        case 0x2f49fcu: goto label_2f49fc;
        case 0x2f4a00u: goto label_2f4a00;
        case 0x2f4a04u: goto label_2f4a04;
        case 0x2f4a08u: goto label_2f4a08;
        case 0x2f4a0cu: goto label_2f4a0c;
        case 0x2f4a10u: goto label_2f4a10;
        case 0x2f4a14u: goto label_2f4a14;
        case 0x2f4a18u: goto label_2f4a18;
        case 0x2f4a1cu: goto label_2f4a1c;
        case 0x2f4a20u: goto label_2f4a20;
        case 0x2f4a24u: goto label_2f4a24;
        case 0x2f4a28u: goto label_2f4a28;
        case 0x2f4a2cu: goto label_2f4a2c;
        case 0x2f4a30u: goto label_2f4a30;
        case 0x2f4a34u: goto label_2f4a34;
        case 0x2f4a38u: goto label_2f4a38;
        case 0x2f4a3cu: goto label_2f4a3c;
        case 0x2f4a40u: goto label_2f4a40;
        case 0x2f4a44u: goto label_2f4a44;
        case 0x2f4a48u: goto label_2f4a48;
        case 0x2f4a4cu: goto label_2f4a4c;
        case 0x2f4a50u: goto label_2f4a50;
        case 0x2f4a54u: goto label_2f4a54;
        case 0x2f4a58u: goto label_2f4a58;
        case 0x2f4a5cu: goto label_2f4a5c;
        case 0x2f4a60u: goto label_2f4a60;
        case 0x2f4a64u: goto label_2f4a64;
        case 0x2f4a68u: goto label_2f4a68;
        case 0x2f4a6cu: goto label_2f4a6c;
        case 0x2f4a70u: goto label_2f4a70;
        case 0x2f4a74u: goto label_2f4a74;
        case 0x2f4a78u: goto label_2f4a78;
        case 0x2f4a7cu: goto label_2f4a7c;
        case 0x2f4a80u: goto label_2f4a80;
        case 0x2f4a84u: goto label_2f4a84;
        case 0x2f4a88u: goto label_2f4a88;
        case 0x2f4a8cu: goto label_2f4a8c;
        case 0x2f4a90u: goto label_2f4a90;
        case 0x2f4a94u: goto label_2f4a94;
        case 0x2f4a98u: goto label_2f4a98;
        case 0x2f4a9cu: goto label_2f4a9c;
        case 0x2f4aa0u: goto label_2f4aa0;
        case 0x2f4aa4u: goto label_2f4aa4;
        case 0x2f4aa8u: goto label_2f4aa8;
        case 0x2f4aacu: goto label_2f4aac;
        case 0x2f4ab0u: goto label_2f4ab0;
        case 0x2f4ab4u: goto label_2f4ab4;
        case 0x2f4ab8u: goto label_2f4ab8;
        case 0x2f4abcu: goto label_2f4abc;
        case 0x2f4ac0u: goto label_2f4ac0;
        case 0x2f4ac4u: goto label_2f4ac4;
        case 0x2f4ac8u: goto label_2f4ac8;
        case 0x2f4accu: goto label_2f4acc;
        case 0x2f4ad0u: goto label_2f4ad0;
        case 0x2f4ad4u: goto label_2f4ad4;
        case 0x2f4ad8u: goto label_2f4ad8;
        case 0x2f4adcu: goto label_2f4adc;
        case 0x2f4ae0u: goto label_2f4ae0;
        case 0x2f4ae4u: goto label_2f4ae4;
        case 0x2f4ae8u: goto label_2f4ae8;
        case 0x2f4aecu: goto label_2f4aec;
        case 0x2f4af0u: goto label_2f4af0;
        case 0x2f4af4u: goto label_2f4af4;
        case 0x2f4af8u: goto label_2f4af8;
        case 0x2f4afcu: goto label_2f4afc;
        case 0x2f4b00u: goto label_2f4b00;
        case 0x2f4b04u: goto label_2f4b04;
        case 0x2f4b08u: goto label_2f4b08;
        case 0x2f4b0cu: goto label_2f4b0c;
        case 0x2f4b10u: goto label_2f4b10;
        case 0x2f4b14u: goto label_2f4b14;
        case 0x2f4b18u: goto label_2f4b18;
        case 0x2f4b1cu: goto label_2f4b1c;
        case 0x2f4b20u: goto label_2f4b20;
        case 0x2f4b24u: goto label_2f4b24;
        case 0x2f4b28u: goto label_2f4b28;
        case 0x2f4b2cu: goto label_2f4b2c;
        case 0x2f4b30u: goto label_2f4b30;
        case 0x2f4b34u: goto label_2f4b34;
        case 0x2f4b38u: goto label_2f4b38;
        case 0x2f4b3cu: goto label_2f4b3c;
        case 0x2f4b40u: goto label_2f4b40;
        case 0x2f4b44u: goto label_2f4b44;
        case 0x2f4b48u: goto label_2f4b48;
        case 0x2f4b4cu: goto label_2f4b4c;
        case 0x2f4b50u: goto label_2f4b50;
        case 0x2f4b54u: goto label_2f4b54;
        case 0x2f4b58u: goto label_2f4b58;
        case 0x2f4b5cu: goto label_2f4b5c;
        case 0x2f4b60u: goto label_2f4b60;
        case 0x2f4b64u: goto label_2f4b64;
        case 0x2f4b68u: goto label_2f4b68;
        case 0x2f4b6cu: goto label_2f4b6c;
        case 0x2f4b70u: goto label_2f4b70;
        case 0x2f4b74u: goto label_2f4b74;
        case 0x2f4b78u: goto label_2f4b78;
        case 0x2f4b7cu: goto label_2f4b7c;
        case 0x2f4b80u: goto label_2f4b80;
        case 0x2f4b84u: goto label_2f4b84;
        case 0x2f4b88u: goto label_2f4b88;
        case 0x2f4b8cu: goto label_2f4b8c;
        case 0x2f4b90u: goto label_2f4b90;
        case 0x2f4b94u: goto label_2f4b94;
        case 0x2f4b98u: goto label_2f4b98;
        case 0x2f4b9cu: goto label_2f4b9c;
        case 0x2f4ba0u: goto label_2f4ba0;
        case 0x2f4ba4u: goto label_2f4ba4;
        case 0x2f4ba8u: goto label_2f4ba8;
        case 0x2f4bacu: goto label_2f4bac;
        case 0x2f4bb0u: goto label_2f4bb0;
        case 0x2f4bb4u: goto label_2f4bb4;
        case 0x2f4bb8u: goto label_2f4bb8;
        case 0x2f4bbcu: goto label_2f4bbc;
        case 0x2f4bc0u: goto label_2f4bc0;
        case 0x2f4bc4u: goto label_2f4bc4;
        case 0x2f4bc8u: goto label_2f4bc8;
        case 0x2f4bccu: goto label_2f4bcc;
        case 0x2f4bd0u: goto label_2f4bd0;
        case 0x2f4bd4u: goto label_2f4bd4;
        case 0x2f4bd8u: goto label_2f4bd8;
        case 0x2f4bdcu: goto label_2f4bdc;
        case 0x2f4be0u: goto label_2f4be0;
        case 0x2f4be4u: goto label_2f4be4;
        case 0x2f4be8u: goto label_2f4be8;
        case 0x2f4becu: goto label_2f4bec;
        case 0x2f4bf0u: goto label_2f4bf0;
        case 0x2f4bf4u: goto label_2f4bf4;
        case 0x2f4bf8u: goto label_2f4bf8;
        case 0x2f4bfcu: goto label_2f4bfc;
        case 0x2f4c00u: goto label_2f4c00;
        case 0x2f4c04u: goto label_2f4c04;
        case 0x2f4c08u: goto label_2f4c08;
        case 0x2f4c0cu: goto label_2f4c0c;
        case 0x2f4c10u: goto label_2f4c10;
        case 0x2f4c14u: goto label_2f4c14;
        case 0x2f4c18u: goto label_2f4c18;
        case 0x2f4c1cu: goto label_2f4c1c;
        case 0x2f4c20u: goto label_2f4c20;
        case 0x2f4c24u: goto label_2f4c24;
        case 0x2f4c28u: goto label_2f4c28;
        case 0x2f4c2cu: goto label_2f4c2c;
        case 0x2f4c30u: goto label_2f4c30;
        case 0x2f4c34u: goto label_2f4c34;
        case 0x2f4c38u: goto label_2f4c38;
        case 0x2f4c3cu: goto label_2f4c3c;
        case 0x2f4c40u: goto label_2f4c40;
        case 0x2f4c44u: goto label_2f4c44;
        case 0x2f4c48u: goto label_2f4c48;
        case 0x2f4c4cu: goto label_2f4c4c;
        case 0x2f4c50u: goto label_2f4c50;
        case 0x2f4c54u: goto label_2f4c54;
        case 0x2f4c58u: goto label_2f4c58;
        case 0x2f4c5cu: goto label_2f4c5c;
        case 0x2f4c60u: goto label_2f4c60;
        case 0x2f4c64u: goto label_2f4c64;
        case 0x2f4c68u: goto label_2f4c68;
        case 0x2f4c6cu: goto label_2f4c6c;
        case 0x2f4c70u: goto label_2f4c70;
        case 0x2f4c74u: goto label_2f4c74;
        case 0x2f4c78u: goto label_2f4c78;
        case 0x2f4c7cu: goto label_2f4c7c;
        case 0x2f4c80u: goto label_2f4c80;
        case 0x2f4c84u: goto label_2f4c84;
        case 0x2f4c88u: goto label_2f4c88;
        case 0x2f4c8cu: goto label_2f4c8c;
        case 0x2f4c90u: goto label_2f4c90;
        case 0x2f4c94u: goto label_2f4c94;
        case 0x2f4c98u: goto label_2f4c98;
        case 0x2f4c9cu: goto label_2f4c9c;
        case 0x2f4ca0u: goto label_2f4ca0;
        case 0x2f4ca4u: goto label_2f4ca4;
        case 0x2f4ca8u: goto label_2f4ca8;
        case 0x2f4cacu: goto label_2f4cac;
        case 0x2f4cb0u: goto label_2f4cb0;
        case 0x2f4cb4u: goto label_2f4cb4;
        case 0x2f4cb8u: goto label_2f4cb8;
        case 0x2f4cbcu: goto label_2f4cbc;
        case 0x2f4cc0u: goto label_2f4cc0;
        case 0x2f4cc4u: goto label_2f4cc4;
        case 0x2f4cc8u: goto label_2f4cc8;
        case 0x2f4cccu: goto label_2f4ccc;
        case 0x2f4cd0u: goto label_2f4cd0;
        case 0x2f4cd4u: goto label_2f4cd4;
        case 0x2f4cd8u: goto label_2f4cd8;
        case 0x2f4cdcu: goto label_2f4cdc;
        case 0x2f4ce0u: goto label_2f4ce0;
        case 0x2f4ce4u: goto label_2f4ce4;
        case 0x2f4ce8u: goto label_2f4ce8;
        case 0x2f4cecu: goto label_2f4cec;
        case 0x2f4cf0u: goto label_2f4cf0;
        case 0x2f4cf4u: goto label_2f4cf4;
        case 0x2f4cf8u: goto label_2f4cf8;
        case 0x2f4cfcu: goto label_2f4cfc;
        case 0x2f4d00u: goto label_2f4d00;
        case 0x2f4d04u: goto label_2f4d04;
        case 0x2f4d08u: goto label_2f4d08;
        case 0x2f4d0cu: goto label_2f4d0c;
        case 0x2f4d10u: goto label_2f4d10;
        case 0x2f4d14u: goto label_2f4d14;
        default: break;
    }

    ctx->pc = 0x2f4388u;

label_2f4388:
    // 0x2f4388: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2f4388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_2f438c:
    // 0x2f438c: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x2f438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
label_2f4390:
    // 0x2f4390: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x2f4390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
label_2f4394:
    // 0x2f4394: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f4394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4398:
    // 0x2f4398: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x2f4398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
label_2f439c:
    // 0x2f439c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f439cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f43a0:
    // 0x2f43a0: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x2f43a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
label_2f43a4:
    // 0x2f43a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f43a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f43a8:
    // 0x2f43a8: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x2f43a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
label_2f43ac:
    // 0x2f43ac: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x2f43acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
label_2f43b0:
    // 0x2f43b0: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x2f43b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
label_2f43b4:
    // 0x2f43b4: 0xffb70178  sd          $s7, 0x178($sp)
    ctx->pc = 0x2f43b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 23));
label_2f43b8:
    // 0x2f43b8: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x2f43b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
label_2f43bc:
    // 0x2f43bc: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x2f43bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_2f43c0:
    // 0x2f43c0: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2f43c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_2f43c4:
    // 0x2f43c4: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x2f43c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_2f43c8:
    // 0x2f43c8: 0xc0899bc  jal         func_2266F0
label_2f43cc:
    if (ctx->pc == 0x2F43CCu) {
        ctx->pc = 0x2F43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43C8u;
        // 0x2f43cc: 0xe7b40190  swc1        $f20, 0x190($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43D0u;
        goto label_2f43d0;
    }
    ctx->pc = 0x2F43C8u;
    SET_GPR_U32(ctx, 31, 0x2F43D0u);
    ctx->pc = 0x2F43CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F43C8u;
    // 0x2f43cc: 0xe7b40190  swc1        $f20, 0x190($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F43C8u, 0x2F43D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43D0u;
label_2f43d0:
    // 0x2f43d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f43d4:
    if (ctx->pc == 0x2F43D4u) {
        ctx->pc = 0x2F43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43D0u;
        // 0x2f43d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43D8u;
        goto label_2f43d8;
    }
    ctx->pc = 0x2F43D0u;
    {
        const bool branch_taken_0x2f43d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43D0u;
        // 0x2f43d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43d0) {
            ctx->pc = 0x2F43F4u;
            goto label_2f43f4;
        }
    }
    ctx->pc = 0x2F43D8u;
label_2f43d8:
    // 0x2f43d8: 0xc0899bc  jal         func_2266F0
label_2f43dc:
    if (ctx->pc == 0x2F43DCu) {
        ctx->pc = 0x2F43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43D8u;
        // 0x2f43dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43E0u;
        goto label_2f43e0;
    }
    ctx->pc = 0x2F43D8u;
    SET_GPR_U32(ctx, 31, 0x2F43E0u);
    ctx->pc = 0x2F43DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F43D8u;
    // 0x2f43dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F43D8u, 0x2F43E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43E0u;
label_2f43e0:
    // 0x2f43e0: 0xc097f26  jal         func_25FC98
label_2f43e4:
    if (ctx->pc == 0x2F43E4u) {
        ctx->pc = 0x2F43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43E0u;
        // 0x2f43e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43E8u;
        goto label_2f43e8;
    }
    ctx->pc = 0x2F43E0u;
    SET_GPR_U32(ctx, 31, 0x2F43E8u);
    ctx->pc = 0x2F43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F43E0u;
    // 0x2f43e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2F43E0u, 0x2F43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43E8u;
label_2f43e8:
    // 0x2f43e8: 0x3842006e  xori        $v0, $v0, 0x6E
    ctx->pc = 0x2f43e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)110);
label_2f43ec:
    // 0x2f43ec: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x2f43ecu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f43f0:
    // 0x2f43f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f43f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f43f4:
    // 0x2f43f4: 0xc08da92  jal         func_236A48
label_2f43f8:
    if (ctx->pc == 0x2F43F8u) {
        ctx->pc = 0x2F43F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43F4u;
        // 0x2f43f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43FCu;
        goto label_2f43fc;
    }
    ctx->pc = 0x2F43F4u;
    SET_GPR_U32(ctx, 31, 0x2F43FCu);
    ctx->pc = 0x2F43F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F43F4u;
    // 0x2f43f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2F43F4u, 0x2F43FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43FCu;
label_2f43fc:
    // 0x2f43fc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2f4400:
    if (ctx->pc == 0x2F4400u) {
        ctx->pc = 0x2F4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43FCu;
        // 0x2f4400: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4404u;
        goto label_2f4404;
    }
    ctx->pc = 0x2F43FCu;
    {
        const bool branch_taken_0x2f43fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f43fc) {
            ctx->pc = 0x2F4400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F43FCu;
            // 0x2f4400: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4410u;
            goto label_2f4410;
        }
    }
    ctx->pc = 0x2F4404u;
label_2f4404:
    // 0x2f4404: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2f4408:
    if (ctx->pc == 0x2F4408u) {
        ctx->pc = 0x2F4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4404u;
        // 0x2f4408: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F440Cu;
        goto label_2f440c;
    }
    ctx->pc = 0x2F4404u;
    {
        const bool branch_taken_0x2f4404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4404u;
        // 0x2f4408: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4404) {
            ctx->pc = 0x2F4414u;
            goto label_2f4414;
        }
    }
    ctx->pc = 0x2F440Cu;
label_2f440c:
    // 0x2f440c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2f440cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4410:
    // 0x2f4410: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f4410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4414:
    // 0x2f4414: 0xc08dab6  jal         func_236AD8
label_2f4418:
    if (ctx->pc == 0x2F4418u) {
        ctx->pc = 0x2F4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4414u;
        // 0x2f4418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F441Cu;
        goto label_2f441c;
    }
    ctx->pc = 0x2F4414u;
    SET_GPR_U32(ctx, 31, 0x2F441Cu);
    ctx->pc = 0x2F4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4414u;
    // 0x2f4418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F4414u, 0x2F441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F441Cu;
label_2f441c:
    // 0x2f441c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2f4420:
    if (ctx->pc == 0x2F4420u) {
        ctx->pc = 0x2F4420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F441Cu;
        // 0x2f4420: 0x3a130001  xori        $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4424u;
        goto label_2f4424;
    }
    ctx->pc = 0x2F441Cu;
    {
        const bool branch_taken_0x2f441c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f441c) {
            ctx->pc = 0x2F4420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F441Cu;
            // 0x2f4420: 0x3a130001  xori        $s3, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4424u;
            goto label_2f4424;
        }
    }
    ctx->pc = 0x2F4424u;
label_2f4424:
    // 0x2f4424: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2f4424u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4428:
    // 0x2f4428: 0xc08dab6  jal         func_236AD8
label_2f442c:
    if (ctx->pc == 0x2F442Cu) {
        ctx->pc = 0x2F442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4428u;
        // 0x2f442c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4430u;
        goto label_2f4430;
    }
    ctx->pc = 0x2F4428u;
    SET_GPR_U32(ctx, 31, 0x2F4430u);
    ctx->pc = 0x2F442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4428u;
    // 0x2f442c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F4428u, 0x2F4430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4430u;
label_2f4430:
    // 0x2f4430: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2f4434:
    if (ctx->pc == 0x2F4434u) {
        ctx->pc = 0x2F4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4430u;
        // 0x2f4434: 0x3a150001  xori        $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4438u;
        goto label_2f4438;
    }
    ctx->pc = 0x2F4430u;
    {
        const bool branch_taken_0x2f4430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4430) {
            ctx->pc = 0x2F4434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4430u;
            // 0x2f4434: 0x3a150001  xori        $s5, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4438u;
            goto label_2f4438;
        }
    }
    ctx->pc = 0x2F4438u;
label_2f4438:
    // 0x2f4438: 0xc08dada  jal         func_236B68
label_2f443c:
    if (ctx->pc == 0x2F443Cu) {
        ctx->pc = 0x2F443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4438u;
        // 0x2f443c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4440u;
        goto label_2f4440;
    }
    ctx->pc = 0x2F4438u;
    SET_GPR_U32(ctx, 31, 0x2F4440u);
    ctx->pc = 0x2F443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4438u;
    // 0x2f443c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x2F4438u, 0x2F4440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4440u;
label_2f4440:
    // 0x2f4440: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4444:
    // 0x2f4444: 0x8e37121c  lw          $s7, 0x121C($s1)
    ctx->pc = 0x2f4444u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2f4448:
    // 0x2f4448: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f4448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2f444c:
    // 0x2f444c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2f4450:
    if (ctx->pc == 0x2F4450u) {
        ctx->pc = 0x2F4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F444Cu;
        // 0x2f4450: 0x30560001  andi        $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4454u;
        goto label_2f4454;
    }
    ctx->pc = 0x2F444Cu;
    {
        const bool branch_taken_0x2f444c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F444Cu;
        // 0x2f4450: 0x30560001  andi        $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f444c) {
            ctx->pc = 0x2F4464u;
            goto label_2f4464;
        }
    }
    ctx->pc = 0x2F4454u;
label_2f4454:
    // 0x2f4454: 0x56c00004  bnel        $s6, $zero, . + 4 + (0x4 << 2)
label_2f4458:
    if (ctx->pc == 0x2F4458u) {
        ctx->pc = 0x2F4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4454u;
        // 0x2f4458: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F445Cu;
        goto label_2f445c;
    }
    ctx->pc = 0x2F4454u;
    {
        const bool branch_taken_0x2f4454 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4454) {
            ctx->pc = 0x2F4458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4454u;
            // 0x2f4458: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4468u;
            goto label_2f4468;
        }
    }
    ctx->pc = 0x2F445Cu;
label_2f445c:
    // 0x2f445c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4460:
    // 0x2f4460: 0xae221248  sw          $v0, 0x1248($s1)
    ctx->pc = 0x2f4460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4680), GPR_U32(ctx, 2));
label_2f4464:
    // 0x2f4464: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x2f4464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4468:
    // 0x2f4468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f4468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f446c:
    // 0x2f446c: 0x0  nop
    ctx->pc = 0x2f446cu;
    // NOP
label_2f4470:
    // 0x2f4470: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f4470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4474:
    // 0x2f4474: 0x0  nop
    ctx->pc = 0x2f4474u;
    // NOP
label_2f4478:
    // 0x2f4478: 0x45030218  bc1tl       . + 4 + (0x218 << 2)
label_2f447c:
    if (ctx->pc == 0x2F447Cu) {
        ctx->pc = 0x2F447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4478u;
        // 0x2f447c: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4480u;
        goto label_2f4480;
    }
    ctx->pc = 0x2F4478u;
    {
        const bool branch_taken_0x2f4478 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4478) {
            ctx->pc = 0x2F447Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4478u;
            // 0x2f447c: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4CDCu;
            goto label_2f4cdc;
        }
    }
    ctx->pc = 0x2F4480u;
label_2f4480:
    // 0x2f4480: 0x9222047d  lbu         $v0, 0x47D($s1)
    ctx->pc = 0x2f4480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
label_2f4484:
    // 0x2f4484: 0x54400215  bnel        $v0, $zero, . + 4 + (0x215 << 2)
label_2f4488:
    if (ctx->pc == 0x2F4488u) {
        ctx->pc = 0x2F4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4484u;
        // 0x2f4488: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F448Cu;
        goto label_2f448c;
    }
    ctx->pc = 0x2F4484u;
    {
        const bool branch_taken_0x2f4484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4484) {
            ctx->pc = 0x2F4488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4484u;
            // 0x2f4488: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4CDCu;
            goto label_2f4cdc;
        }
    }
    ctx->pc = 0x2F448Cu;
label_2f448c:
    // 0x2f448c: 0x8e2211d8  lw          $v0, 0x11D8($s1)
    ctx->pc = 0x2f448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
label_2f4490:
    // 0x2f4490: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2f4494:
    if (ctx->pc == 0x2F4494u) {
        ctx->pc = 0x2F4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4490u;
        // 0x2f4494: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4498u;
        goto label_2f4498;
    }
    ctx->pc = 0x2F4490u;
    {
        const bool branch_taken_0x2f4490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4490) {
            ctx->pc = 0x2F4494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4490u;
            // 0x2f4494: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F44A8u;
            goto label_2f44a8;
        }
    }
    ctx->pc = 0x2F4498u;
label_2f4498:
    // 0x2f4498: 0x8e221248  lw          $v0, 0x1248($s1)
    ctx->pc = 0x2f4498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4680)));
label_2f449c:
    // 0x2f449c: 0x5040020f  beql        $v0, $zero, . + 4 + (0x20F << 2)
label_2f44a0:
    if (ctx->pc == 0x2F44A0u) {
        ctx->pc = 0x2F44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F449Cu;
        // 0x2f44a0: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44A4u;
        goto label_2f44a4;
    }
    ctx->pc = 0x2F449Cu;
    {
        const bool branch_taken_0x2f449c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f449c) {
            ctx->pc = 0x2F44A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F449Cu;
            // 0x2f44a0: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4CDCu;
            goto label_2f4cdc;
        }
    }
    ctx->pc = 0x2F44A4u;
label_2f44a4:
    // 0x2f44a4: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2f44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2f44a8:
    // 0x2f44a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f44a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f44ac:
    // 0x2f44ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f44acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f44b0:
    // 0x2f44b0: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x2f44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_2f44b4:
    // 0x2f44b4: 0x40f809  jalr        $v0
label_2f44b8:
    if (ctx->pc == 0x2F44B8u) {
        ctx->pc = 0x2F44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44B4u;
        // 0x2f44b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44BCu;
        goto label_2f44bc;
    }
    ctx->pc = 0x2F44B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F44BCu);
        ctx->pc = 0x2F44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44B4u;
        // 0x2f44b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F44B4u, 0x2F44BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F44BCu;
label_2f44bc:
    // 0x2f44bc: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
label_2f44c0:
    if (ctx->pc == 0x2F44C0u) {
        ctx->pc = 0x2F44C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44BCu;
        // 0x2f44c0: 0x8e2511c0  lw          $a1, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44C4u;
        goto label_2f44c4;
    }
    ctx->pc = 0x2F44BCu;
    {
        const bool branch_taken_0x2f44bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f44bc) {
            ctx->pc = 0x2F44C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F44BCu;
            // 0x2f44c0: 0x8e2511c0  lw          $a1, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F45ECu;
            goto label_2f45ec;
        }
    }
    ctx->pc = 0x2F44C4u;
label_2f44c4:
    // 0x2f44c4: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x2f44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2f44c8:
    // 0x2f44c8: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2f44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2f44cc:
    // 0x2f44cc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2f44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2f44d0:
    // 0x2f44d0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f44d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f44d4:
    // 0x2f44d4: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
label_2f44d8:
    if (ctx->pc == 0x2F44D8u) {
        ctx->pc = 0x2F44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44D4u;
        // 0x2f44d8: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44DCu;
        goto label_2f44dc;
    }
    ctx->pc = 0x2F44D4u;
    {
        const bool branch_taken_0x2f44d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44D4u;
        // 0x2f44d8: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44d4) {
            ctx->pc = 0x2F45E8u;
            goto label_2f45e8;
        }
    }
    ctx->pc = 0x2F44DCu;
label_2f44dc:
    // 0x2f44dc: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
label_2f44e0:
    if (ctx->pc == 0x2F44E0u) {
        ctx->pc = 0x2F44E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44DCu;
        // 0x2f44e0: 0x8e250334  lw          $a1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44E4u;
        goto label_2f44e4;
    }
    ctx->pc = 0x2F44DCu;
    {
        const bool branch_taken_0x2f44dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F44E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44DCu;
        // 0x2f44e0: 0x8e250334  lw          $a1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44dc) {
            ctx->pc = 0x2F4544u;
            goto label_2f4544;
        }
    }
    ctx->pc = 0x2F44E4u;
label_2f44e4:
    // 0x2f44e4: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2f44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_2f44e8:
    // 0x2f44e8: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x2f44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_2f44ec:
    // 0x2f44ec: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_2f44f0:
    if (ctx->pc == 0x2F44F0u) {
        ctx->pc = 0x2F44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44ECu;
        // 0x2f44f0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44F4u;
        goto label_2f44f4;
    }
    ctx->pc = 0x2F44ECu;
    {
        const bool branch_taken_0x2f44ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44ECu;
        // 0x2f44f0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44ec) {
            ctx->pc = 0x2F4548u;
            goto label_2f4548;
        }
    }
    ctx->pc = 0x2F44F4u;
label_2f44f4:
    // 0x2f44f4: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2f44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_2f44f8:
    // 0x2f44f8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2f44fc:
    if (ctx->pc == 0x2F44FCu) {
        ctx->pc = 0x2F44FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44F8u;
        // 0x2f44fc: 0xc4410024  lwc1        $f1, 0x24($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4500u;
        goto label_2f4500;
    }
    ctx->pc = 0x2F44F8u;
    {
        const bool branch_taken_0x2f44f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f44f8) {
            ctx->pc = 0x2F44FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F44F8u;
            // 0x2f44fc: 0xc4410024  lwc1        $f1, 0x24($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F452Cu;
            goto label_2f452c;
        }
    }
    ctx->pc = 0x2F4500u;
label_2f4500:
    // 0x2f4500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4504:
    // 0x2f4504: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x2f4504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_2f4508:
    // 0x2f4508: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f4508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f450c:
    // 0x2f450c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2f4510:
    if (ctx->pc == 0x2F4510u) {
        ctx->pc = 0x2F4510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F450Cu;
        // 0x2f4510: 0xc4410024  lwc1        $f1, 0x24($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4514u;
        goto label_2f4514;
    }
    ctx->pc = 0x2F450Cu;
    {
        const bool branch_taken_0x2f450c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f450c) {
            ctx->pc = 0x2F4510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F450Cu;
            // 0x2f4510: 0xc4410024  lwc1        $f1, 0x24($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F452Cu;
            goto label_2f452c;
        }
    }
    ctx->pc = 0x2F4514u;
label_2f4514:
    // 0x2f4514: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f4514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2f4518:
    // 0x2f4518: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2f4518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f451c:
    // 0x2f451c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2f4520:
    if (ctx->pc == 0x2F4520u) {
        ctx->pc = 0x2F4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F451Cu;
        // 0x2f4520: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4524u;
        goto label_2f4524;
    }
    ctx->pc = 0x2F451Cu;
    {
        const bool branch_taken_0x2f451c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F451Cu;
        // 0x2f4520: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f451c) {
            ctx->pc = 0x2F4508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4508;
        }
    }
    ctx->pc = 0x2F4524u;
label_2f4524:
    // 0x2f4524: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x2f4524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2f4528:
    // 0x2f4528: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2f4528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f452c:
    // 0x2f452c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f452cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f4530:
    // 0x2f4530: 0x0  nop
    ctx->pc = 0x2f4530u;
    // NOP
label_2f4534:
    // 0x2f4534: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f4534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4538:
    // 0x2f4538: 0x0  nop
    ctx->pc = 0x2f4538u;
    // NOP
label_2f453c:
    // 0x2f453c: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
label_2f4540:
    if (ctx->pc == 0x2F4540u) {
        ctx->pc = 0x2F4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F453Cu;
        // 0x2f4540: 0x8e2511c0  lw          $a1, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4544u;
        goto label_2f4544;
    }
    ctx->pc = 0x2F453Cu;
    {
        const bool branch_taken_0x2f453c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f453c) {
            ctx->pc = 0x2F4540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F453Cu;
            // 0x2f4540: 0x8e2511c0  lw          $a1, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F45ECu;
            goto label_2f45ec;
        }
    }
    ctx->pc = 0x2F4544u;
label_2f4544:
    // 0x2f4544: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2f4544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_2f4548:
    // 0x2f4548: 0x2462ffe3  addiu       $v0, $v1, -0x1D
    ctx->pc = 0x2f4548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967267));
label_2f454c:
    // 0x2f454c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f454cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f4550:
    // 0x2f4550: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_2f4554:
    if (ctx->pc == 0x2F4554u) {
        ctx->pc = 0x2F4554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4550u;
        // 0x2f4554: 0x8e2511c0  lw          $a1, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4558u;
        goto label_2f4558;
    }
    ctx->pc = 0x2F4550u;
    {
        const bool branch_taken_0x2f4550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4550) {
            ctx->pc = 0x2F4554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4550u;
            // 0x2f4554: 0x8e2511c0  lw          $a1, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F45ECu;
            goto label_2f45ec;
        }
    }
    ctx->pc = 0x2F4558u;
label_2f4558:
    // 0x2f4558: 0x2462ffd9  addiu       $v0, $v1, -0x27
    ctx->pc = 0x2f4558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967257));
label_2f455c:
    // 0x2f455c: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2f455cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2f4560:
    // 0x2f4560: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f4564:
    if (ctx->pc == 0x2F4564u) {
        ctx->pc = 0x2F4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4560u;
        // 0x2f4564: 0x2462ffbd  addiu       $v0, $v1, -0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967229));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4568u;
        goto label_2f4568;
    }
    ctx->pc = 0x2F4560u;
    {
        const bool branch_taken_0x2f4560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4560u;
        // 0x2f4564: 0x2462ffbd  addiu       $v0, $v1, -0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967229));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4560) {
            ctx->pc = 0x2F4574u;
            goto label_2f4574;
        }
    }
    ctx->pc = 0x2F4568u;
label_2f4568:
    // 0x2f4568: 0x8ce200b4  lw          $v0, 0xB4($a3)
    ctx->pc = 0x2f4568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
label_2f456c:
    // 0x2f456c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2f4570:
    if (ctx->pc == 0x2F4570u) {
        ctx->pc = 0x2F4570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F456Cu;
        // 0x2f4570: 0x2462ffbd  addiu       $v0, $v1, -0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967229));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4574u;
        goto label_2f4574;
    }
    ctx->pc = 0x2F456Cu;
    {
        const bool branch_taken_0x2f456c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F456Cu;
        // 0x2f4570: 0x2462ffbd  addiu       $v0, $v1, -0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967229));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f456c) {
            ctx->pc = 0x2F45E8u;
            goto label_2f45e8;
        }
    }
    ctx->pc = 0x2F4574u;
label_2f4574:
    // 0x2f4574: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2f4574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2f4578:
    // 0x2f4578: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2f457c:
    if (ctx->pc == 0x2F457Cu) {
        ctx->pc = 0x2F457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4578u;
        // 0x2f457c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4580u;
        goto label_2f4580;
    }
    ctx->pc = 0x2F4578u;
    {
        const bool branch_taken_0x2f4578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4578u;
        // 0x2f457c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4578) {
            ctx->pc = 0x2F4594u;
            goto label_2f4594;
        }
    }
    ctx->pc = 0x2F4580u;
label_2f4580:
    // 0x2f4580: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x2f4580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_2f4584:
    // 0x2f4584: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f4588:
    if (ctx->pc == 0x2F4588u) {
        ctx->pc = 0x2F4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4584u;
        // 0x2f4588: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F458Cu;
        goto label_2f458c;
    }
    ctx->pc = 0x2F4584u;
    {
        const bool branch_taken_0x2f4584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4584u;
        // 0x2f4588: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4584) {
            ctx->pc = 0x2F4594u;
            goto label_2f4594;
        }
    }
    ctx->pc = 0x2F458Cu;
label_2f458c:
    // 0x2f458c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2f4590:
    if (ctx->pc == 0x2F4590u) {
        ctx->pc = 0x2F4594u;
        goto label_2f4594;
    }
    ctx->pc = 0x2F458Cu;
    {
        const bool branch_taken_0x2f458c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f458c) {
            ctx->pc = 0x2F4598u;
            goto label_2f4598;
        }
    }
    ctx->pc = 0x2F4594u;
label_2f4594:
    // 0x2f4594: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f4594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4598:
    // 0x2f4598: 0x54800014  bnel        $a0, $zero, . + 4 + (0x14 << 2)
label_2f459c:
    if (ctx->pc == 0x2F459Cu) {
        ctx->pc = 0x2F459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4598u;
        // 0x2f459c: 0x8e2511c0  lw          $a1, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45A0u;
        goto label_2f45a0;
    }
    ctx->pc = 0x2F4598u;
    {
        const bool branch_taken_0x2f4598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4598) {
            ctx->pc = 0x2F459Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4598u;
            // 0x2f459c: 0x8e2511c0  lw          $a1, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F45ECu;
            goto label_2f45ec;
        }
    }
    ctx->pc = 0x2F45A0u;
label_2f45a0:
    // 0x2f45a0: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2f45a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_2f45a4:
    // 0x2f45a4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2f45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2f45a8:
    // 0x2f45a8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_2f45ac:
    if (ctx->pc == 0x2F45ACu) {
        ctx->pc = 0x2F45ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45A8u;
        // 0x2f45ac: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45B0u;
        goto label_2f45b0;
    }
    ctx->pc = 0x2F45A8u;
    {
        const bool branch_taken_0x2f45a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F45ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45A8u;
        // 0x2f45ac: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45a8) {
            ctx->pc = 0x2F45E8u;
            goto label_2f45e8;
        }
    }
    ctx->pc = 0x2F45B0u;
label_2f45b0:
    // 0x2f45b0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_2f45b4:
    if (ctx->pc == 0x2F45B4u) {
        ctx->pc = 0x2F45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45B0u;
        // 0x2f45b4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45B8u;
        goto label_2f45b8;
    }
    ctx->pc = 0x2F45B0u;
    {
        const bool branch_taken_0x2f45b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45B0u;
        // 0x2f45b4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45b0) {
            ctx->pc = 0x2F45E8u;
            goto label_2f45e8;
        }
    }
    ctx->pc = 0x2F45B8u;
label_2f45b8:
    // 0x2f45b8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_2f45bc:
    if (ctx->pc == 0x2F45BCu) {
        ctx->pc = 0x2F45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45B8u;
        // 0x2f45bc: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45C0u;
        goto label_2f45c0;
    }
    ctx->pc = 0x2F45B8u;
    {
        const bool branch_taken_0x2f45b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45B8u;
        // 0x2f45bc: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45b8) {
            ctx->pc = 0x2F45E8u;
            goto label_2f45e8;
        }
    }
    ctx->pc = 0x2F45C0u;
label_2f45c0:
    // 0x2f45c0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2f45c4:
    if (ctx->pc == 0x2F45C4u) {
        ctx->pc = 0x2F45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45C0u;
        // 0x2f45c4: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45C8u;
        goto label_2f45c8;
    }
    ctx->pc = 0x2F45C0u;
    {
        const bool branch_taken_0x2f45c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45C0u;
        // 0x2f45c4: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45c0) {
            ctx->pc = 0x2F45E8u;
            goto label_2f45e8;
        }
    }
    ctx->pc = 0x2F45C8u;
label_2f45c8:
    // 0x2f45c8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2f45cc:
    if (ctx->pc == 0x2F45CCu) {
        ctx->pc = 0x2F45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45C8u;
        // 0x2f45cc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45D0u;
        goto label_2f45d0;
    }
    ctx->pc = 0x2F45C8u;
    {
        const bool branch_taken_0x2f45c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45C8u;
        // 0x2f45cc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45c8) {
            ctx->pc = 0x2F45E8u;
            goto label_2f45e8;
        }
    }
    ctx->pc = 0x2F45D0u;
label_2f45d0:
    // 0x2f45d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f45d4:
    if (ctx->pc == 0x2F45D4u) {
        ctx->pc = 0x2F45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45D0u;
        // 0x2f45d4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45D8u;
        goto label_2f45d8;
    }
    ctx->pc = 0x2F45D0u;
    {
        const bool branch_taken_0x2f45d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45D0u;
        // 0x2f45d4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45d0) {
            ctx->pc = 0x2F45E8u;
            goto label_2f45e8;
        }
    }
    ctx->pc = 0x2F45D8u;
label_2f45d8:
    // 0x2f45d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f45dc:
    if (ctx->pc == 0x2F45DCu) {
        ctx->pc = 0x2F45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45D8u;
        // 0x2f45dc: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45E0u;
        goto label_2f45e0;
    }
    ctx->pc = 0x2F45D8u;
    {
        const bool branch_taken_0x2f45d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45D8u;
        // 0x2f45dc: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45d8) {
            ctx->pc = 0x2F45E8u;
            goto label_2f45e8;
        }
    }
    ctx->pc = 0x2F45E0u;
label_2f45e0:
    // 0x2f45e0: 0x546201be  bnel        $v1, $v0, . + 4 + (0x1BE << 2)
label_2f45e4:
    if (ctx->pc == 0x2F45E4u) {
        ctx->pc = 0x2F45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45E0u;
        // 0x2f45e4: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45E8u;
        goto label_2f45e8;
    }
    ctx->pc = 0x2F45E0u;
    {
        const bool branch_taken_0x2f45e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f45e0) {
            ctx->pc = 0x2F45E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F45E0u;
            // 0x2f45e4: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4CDCu;
            goto label_2f4cdc;
        }
    }
    ctx->pc = 0x2F45E8u;
label_2f45e8:
    // 0x2f45e8: 0x8e2511c0  lw          $a1, 0x11C0($s1)
    ctx->pc = 0x2f45e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2f45ec:
    // 0x2f45ec: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2f45ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2f45f0:
    // 0x2f45f0: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x2f45f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2f45f4:
    // 0x2f45f4: 0x504301b9  beql        $v0, $v1, . + 4 + (0x1B9 << 2)
label_2f45f8:
    if (ctx->pc == 0x2F45F8u) {
        ctx->pc = 0x2F45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45F4u;
        // 0x2f45f8: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45FCu;
        goto label_2f45fc;
    }
    ctx->pc = 0x2F45F4u;
    {
        const bool branch_taken_0x2f45f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f45f4) {
            ctx->pc = 0x2F45F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F45F4u;
            // 0x2f45f8: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4CDCu;
            goto label_2f4cdc;
        }
    }
    ctx->pc = 0x2F45FCu;
label_2f45fc:
    // 0x2f45fc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2f4600:
    if (ctx->pc == 0x2F4600u) {
        ctx->pc = 0x2F4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45FCu;
        // 0x2f4600: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4604u;
        goto label_2f4604;
    }
    ctx->pc = 0x2F45FCu;
    {
        const bool branch_taken_0x2f45fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45FCu;
        // 0x2f4600: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45fc) {
            ctx->pc = 0x2F461Cu;
            goto label_2f461c;
        }
    }
    ctx->pc = 0x2F4604u;
label_2f4604:
    // 0x2f4604: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f4604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2f4608:
    // 0x2f4608: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2f4608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2f460c:
    // 0x2f460c: 0xc456b78c  lwc1        $f22, -0x4874($v0)
    ctx->pc = 0x2f460cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2f4610:
    // 0x2f4610: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x2f4610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_2f4614:
    // 0x2f4614: 0xc495b77c  lwc1        $f21, -0x4884($a0)
    ctx->pc = 0x2f4614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294948732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f4618:
    // 0x2f4618: 0xc477b7a8  lwc1        $f23, -0x4858($v1)
    ctx->pc = 0x2f4618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2f461c:
    // 0x2f461c: 0x1280001a  beqz        $s4, . + 4 + (0x1A << 2)
label_2f4620:
    if (ctx->pc == 0x2F4620u) {
        ctx->pc = 0x2F4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F461Cu;
        // 0x2f4620: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4624u;
        goto label_2f4624;
    }
    ctx->pc = 0x2F461Cu;
    {
        const bool branch_taken_0x2f461c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F461Cu;
        // 0x2f4620: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f461c) {
            ctx->pc = 0x2F4688u;
            goto label_2f4688;
        }
    }
    ctx->pc = 0x2F4624u;
label_2f4624:
    // 0x2f4624: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f4628:
    if (ctx->pc == 0x2F4628u) {
        ctx->pc = 0x2F4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4624u;
        // 0x2f4628: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F462Cu;
        goto label_2f462c;
    }
    ctx->pc = 0x2F4624u;
    {
        const bool branch_taken_0x2f4624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4624u;
        // 0x2f4628: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4624) {
            ctx->pc = 0x2F4634u;
            goto label_2f4634;
        }
    }
    ctx->pc = 0x2F462Cu;
label_2f462c:
    // 0x2f462c: 0x8e221208  lw          $v0, 0x1208($s1)
    ctx->pc = 0x2f462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4616)));
label_2f4630:
    // 0x2f4630: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2f4630u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f4634:
    // 0x2f4634: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2f4638:
    if (ctx->pc == 0x2F4638u) {
        ctx->pc = 0x2F4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4634u;
        // 0x2f4638: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F463Cu;
        goto label_2f463c;
    }
    ctx->pc = 0x2F4634u;
    {
        const bool branch_taken_0x2f4634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4634u;
        // 0x2f4638: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4634) {
            ctx->pc = 0x2F4644u;
            goto label_2f4644;
        }
    }
    ctx->pc = 0x2F463Cu;
label_2f463c:
    // 0x2f463c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f4640:
    if (ctx->pc == 0x2F4640u) {
        ctx->pc = 0x2F4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F463Cu;
        // 0x2f4640: 0xc455b774  lwc1        $f21, -0x488C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4644u;
        goto label_2f4644;
    }
    ctx->pc = 0x2F463Cu;
    {
        const bool branch_taken_0x2f463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F463Cu;
        // 0x2f4640: 0xc455b774  lwc1        $f21, -0x488C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f463c) {
            ctx->pc = 0x2F464Cu;
            goto label_2f464c;
        }
    }
    ctx->pc = 0x2F4644u;
label_2f4644:
    // 0x2f4644: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f4644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f4648:
    // 0x2f4648: 0xc455b780  lwc1        $f21, -0x4880($v0)
    ctx->pc = 0x2f4648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f464c:
    // 0x2f464c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_2f4650:
    if (ctx->pc == 0x2F4650u) {
        ctx->pc = 0x2F4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F464Cu;
        // 0x2f4650: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4654u;
        goto label_2f4654;
    }
    ctx->pc = 0x2F464Cu;
    {
        const bool branch_taken_0x2f464c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F464Cu;
        // 0x2f4650: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f464c) {
            ctx->pc = 0x2F465Cu;
            goto label_2f465c;
        }
    }
    ctx->pc = 0x2F4654u;
label_2f4654:
    // 0x2f4654: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f4658:
    if (ctx->pc == 0x2F4658u) {
        ctx->pc = 0x2F4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4654u;
        // 0x2f4658: 0xc457b798  lwc1        $f23, -0x4868($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F465Cu;
        goto label_2f465c;
    }
    ctx->pc = 0x2F4654u;
    {
        const bool branch_taken_0x2f4654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4654u;
        // 0x2f4658: 0xc457b798  lwc1        $f23, -0x4868($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4654) {
            ctx->pc = 0x2F4664u;
            goto label_2f4664;
        }
    }
    ctx->pc = 0x2F465Cu;
label_2f465c:
    // 0x2f465c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f4660:
    // 0x2f4660: 0xc457b79c  lwc1        $f23, -0x4864($v0)
    ctx->pc = 0x2f4660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2f4664:
    // 0x2f4664: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f4664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2f4668:
    // 0x2f4668: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f4668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f466c:
    // 0x2f466c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_2f4670:
    if (ctx->pc == 0x2F4670u) {
        ctx->pc = 0x2F4670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F466Cu;
        // 0x2f4670: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4674u;
        goto label_2f4674;
    }
    ctx->pc = 0x2F466Cu;
    {
        const bool branch_taken_0x2f466c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F466Cu;
        // 0x2f4670: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f466c) {
            ctx->pc = 0x2F478Cu;
            goto label_2f478c;
        }
    }
    ctx->pc = 0x2F4674u;
label_2f4674:
    // 0x2f4674: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f4674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f4678:
    // 0x2f4678: 0xc456b788  lwc1        $f22, -0x4878($v0)
    ctx->pc = 0x2f4678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2f467c:
    // 0x2f467c: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x2f467cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_2f4680:
    // 0x2f4680: 0x10000045  b           . + 4 + (0x45 << 2)
label_2f4684:
    if (ctx->pc == 0x2F4684u) {
        ctx->pc = 0x2F4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4680u;
        // 0x2f4684: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4688u;
        goto label_2f4688;
    }
    ctx->pc = 0x2F4680u;
    {
        const bool branch_taken_0x2f4680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4680u;
        // 0x2f4684: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4680) {
            ctx->pc = 0x2F4798u;
            goto label_2f4798;
        }
    }
    ctx->pc = 0x2F4688u;
label_2f4688:
    // 0x2f4688: 0x12600043  beqz        $s3, . + 4 + (0x43 << 2)
label_2f468c:
    if (ctx->pc == 0x2F468Cu) {
        ctx->pc = 0x2F468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4688u;
        // 0x2f468c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4690u;
        goto label_2f4690;
    }
    ctx->pc = 0x2F4688u;
    {
        const bool branch_taken_0x2f4688 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4688u;
        // 0x2f468c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4688) {
            ctx->pc = 0x2F4798u;
            goto label_2f4798;
        }
    }
    ctx->pc = 0x2F4690u;
label_2f4690:
    // 0x2f4690: 0xc0899bc  jal         func_2266F0
label_2f4694:
    if (ctx->pc == 0x2F4694u) {
        ctx->pc = 0x2F4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4690u;
        // 0x2f4694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4698u;
        goto label_2f4698;
    }
    ctx->pc = 0x2F4690u;
    SET_GPR_U32(ctx, 31, 0x2F4698u);
    ctx->pc = 0x2F4694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4690u;
    // 0x2f4694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F4690u, 0x2F4698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4698u;
label_2f4698:
    // 0x2f4698: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x2f4698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_2f469c:
    // 0x2f469c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f469cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f46a0:
    // 0x2f46a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f46a4:
    // 0x2f46a4: 0xc0899bc  jal         func_2266F0
label_2f46a8:
    if (ctx->pc == 0x2F46A8u) {
        ctx->pc = 0x2F46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46A4u;
        // 0x2f46a8: 0xc4540054  lwc1        $f20, 0x54($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46ACu;
        goto label_2f46ac;
    }
    ctx->pc = 0x2F46A4u;
    SET_GPR_U32(ctx, 31, 0x2F46ACu);
    ctx->pc = 0x2F46A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F46A4u;
    // 0x2f46a8: 0xc4540054  lwc1        $f20, 0x54($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F46A4u, 0x2F46ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F46ACu;
label_2f46ac:
    // 0x2f46ac: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x2f46acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_2f46b0:
    // 0x2f46b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f46b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f46b4:
    // 0x2f46b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f46b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f46b8:
    // 0x2f46b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f46b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f46bc:
    // 0x2f46bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f46c0:
    // 0x2f46c0: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x2f46c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f46c4:
    // 0x2f46c4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2f46c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2f46c8:
    // 0x2f46c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f46c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f46cc:
    // 0x2f46cc: 0xc0899bc  jal         func_2266F0
label_2f46d0:
    if (ctx->pc == 0x2F46D0u) {
        ctx->pc = 0x2F46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46CCu;
        // 0x2f46d0: 0x4600a540  add.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46D4u;
        goto label_2f46d4;
    }
    ctx->pc = 0x2F46CCu;
    SET_GPR_U32(ctx, 31, 0x2F46D4u);
    ctx->pc = 0x2F46D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F46CCu;
    // 0x2f46d0: 0x4600a540  add.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F46CCu, 0x2F46D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F46D4u;
label_2f46d4:
    // 0x2f46d4: 0xc097f76  jal         func_25FDD8
label_2f46d8:
    if (ctx->pc == 0x2F46D8u) {
        ctx->pc = 0x2F46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46D4u;
        // 0x2f46d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46DCu;
        goto label_2f46dc;
    }
    ctx->pc = 0x2F46D4u;
    SET_GPR_U32(ctx, 31, 0x2F46DCu);
    ctx->pc = 0x2F46D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F46D4u;
    // 0x2f46d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x2F46D4u, 0x2F46DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F46DCu;
label_2f46dc:
    // 0x2f46dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2f46e0:
    if (ctx->pc == 0x2F46E0u) {
        ctx->pc = 0x2F46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46DCu;
        // 0x2f46e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46E4u;
        goto label_2f46e4;
    }
    ctx->pc = 0x2F46DCu;
    {
        const bool branch_taken_0x2f46dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46DCu;
        // 0x2f46e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46dc) {
            ctx->pc = 0x2F4734u;
            goto label_2f4734;
        }
    }
    ctx->pc = 0x2F46E4u;
label_2f46e4:
    // 0x2f46e4: 0xc0f7da4  jal         func_3DF690
label_2f46e8:
    if (ctx->pc == 0x2F46E8u) {
        ctx->pc = 0x2F46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46E4u;
        // 0x2f46e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46ECu;
        goto label_2f46ec;
    }
    ctx->pc = 0x2F46E4u;
    SET_GPR_U32(ctx, 31, 0x2F46ECu);
    ctx->pc = 0x2F46E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F46E4u;
    // 0x2f46e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2F46E4u, 0x2F46ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F46ECu;
label_2f46ec:
    // 0x2f46ec: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2f46f0:
    if (ctx->pc == 0x2F46F0u) {
        ctx->pc = 0x2F46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46ECu;
        // 0x2f46f0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46F4u;
        goto label_2f46f4;
    }
    ctx->pc = 0x2F46ECu;
    {
        const bool branch_taken_0x2f46ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f46ec) {
            ctx->pc = 0x2F46F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F46ECu;
            // 0x2f46f0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4714u;
            goto label_2f4714;
        }
    }
    ctx->pc = 0x2F46F4u;
label_2f46f4:
    // 0x2f46f4: 0xc0f7da0  jal         func_3DF680
label_2f46f8:
    if (ctx->pc == 0x2F46F8u) {
        ctx->pc = 0x2F46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46F4u;
        // 0x2f46f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46FCu;
        goto label_2f46fc;
    }
    ctx->pc = 0x2F46F4u;
    SET_GPR_U32(ctx, 31, 0x2F46FCu);
    ctx->pc = 0x2F46F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F46F4u;
    // 0x2f46f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2F46F4u, 0x2F46FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F46FCu;
label_2f46fc:
    // 0x2f46fc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2f4700:
    if (ctx->pc == 0x2F4700u) {
        ctx->pc = 0x2F4700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46FCu;
        // 0x2f4700: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4704u;
        goto label_2f4704;
    }
    ctx->pc = 0x2F46FCu;
    {
        const bool branch_taken_0x2f46fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f46fc) {
            ctx->pc = 0x2F4700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F46FCu;
            // 0x2f4700: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4714u;
            goto label_2f4714;
        }
    }
    ctx->pc = 0x2F4704u;
label_2f4704:
    // 0x2f4704: 0xc0f7da8  jal         func_3DF6A0
label_2f4708:
    if (ctx->pc == 0x2F4708u) {
        ctx->pc = 0x2F4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4704u;
        // 0x2f4708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F470Cu;
        goto label_2f470c;
    }
    ctx->pc = 0x2F4704u;
    SET_GPR_U32(ctx, 31, 0x2F470Cu);
    ctx->pc = 0x2F4708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4704u;
    // 0x2f4708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2F4704u, 0x2F470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F470Cu;
label_2f470c:
    // 0x2f470c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2f4710:
    if (ctx->pc == 0x2F4710u) {
        ctx->pc = 0x2F4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F470Cu;
        // 0x2f4710: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4714u;
        goto label_2f4714;
    }
    ctx->pc = 0x2F470Cu;
    {
        const bool branch_taken_0x2f470c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f470c) {
            ctx->pc = 0x2F4710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F470Cu;
            // 0x2f4710: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4714u;
            goto label_2f4714;
        }
    }
    ctx->pc = 0x2F4714u;
label_2f4714:
    // 0x2f4714: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_2f4718:
    if (ctx->pc == 0x2F4718u) {
        ctx->pc = 0x2F4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4714u;
        // 0x2f4718: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F471Cu;
        goto label_2f471c;
    }
    ctx->pc = 0x2F4714u;
    {
        const bool branch_taken_0x2f4714 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4714u;
        // 0x2f4718: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4714) {
            ctx->pc = 0x2F4738u;
            goto label_2f4738;
        }
    }
    ctx->pc = 0x2F471Cu;
label_2f471c:
    // 0x2f471c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4720:
    // 0x2f4720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4724:
    // 0x2f4724: 0xc0bd62c  jal         func_2F58B0
label_2f4728:
    if (ctx->pc == 0x2F4728u) {
        ctx->pc = 0x2F4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4724u;
        // 0x2f4728: 0xa22211ba  sb          $v0, 0x11BA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4538), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F472Cu;
        goto label_2f472c;
    }
    ctx->pc = 0x2F4724u;
    SET_GPR_U32(ctx, 31, 0x2F472Cu);
    ctx->pc = 0x2F4728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4724u;
    // 0x2f4728: 0xa22211ba  sb          $v0, 0x11BA($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 4538), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2F4724u, 0x2F472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F472Cu;
label_2f472c:
    // 0x2f472c: 0x1000016b  b           . + 4 + (0x16B << 2)
label_2f4730:
    if (ctx->pc == 0x2F4730u) {
        ctx->pc = 0x2F4730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F472Cu;
        // 0x2f4730: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4734u;
        goto label_2f4734;
    }
    ctx->pc = 0x2F472Cu;
    {
        const bool branch_taken_0x2f472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F472Cu;
        // 0x2f4730: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f472c) {
            ctx->pc = 0x2F4CDCu;
            goto label_2f4cdc;
        }
    }
    ctx->pc = 0x2F4734u;
label_2f4734:
    // 0x2f4734: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f4734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f4738:
    // 0x2f4738: 0xc457b7a4  lwc1        $f23, -0x485C($v0)
    ctx->pc = 0x2f4738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2f473c:
    // 0x2f473c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x2f473cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2f4740:
    // 0x2f4740: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x2f4740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_2f4744:
    // 0x2f4744: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2f4744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2f4748:
    // 0x2f4748: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_2f474c:
    if (ctx->pc == 0x2F474Cu) {
        ctx->pc = 0x2F474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4748u;
        // 0x2f474c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4750u;
        goto label_2f4750;
    }
    ctx->pc = 0x2F4748u;
    {
        const bool branch_taken_0x2f4748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4748u;
        // 0x2f474c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4748) {
            ctx->pc = 0x2F4770u;
            goto label_2f4770;
        }
    }
    ctx->pc = 0x2F4750u;
label_2f4750:
    // 0x2f4750: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x2f4750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
label_2f4754:
    // 0x2f4754: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f4754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2f4758:
    // 0x2f4758: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2f4758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f475c:
    // 0x2f475c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2f475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4760:
    // 0x2f4760: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f4760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4764:
    // 0x2f4764: 0x0  nop
    ctx->pc = 0x2f4764u;
    // NOP
label_2f4768:
    // 0x2f4768: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f476c:
    if (ctx->pc == 0x2F476Cu) {
        ctx->pc = 0x2F476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4768u;
        // 0x2f476c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4770u;
        goto label_2f4770;
    }
    ctx->pc = 0x2F4768u;
    {
        const bool branch_taken_0x2f4768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4768) {
            ctx->pc = 0x2F476Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4768u;
            // 0x2f476c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4770u;
            goto label_2f4770;
        }
    }
    ctx->pc = 0x2F4770u;
label_2f4770:
    // 0x2f4770: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2f4774:
    if (ctx->pc == 0x2F4774u) {
        ctx->pc = 0x2F4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4770u;
        // 0x2f4774: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4778u;
        goto label_2f4778;
    }
    ctx->pc = 0x2F4770u;
    {
        const bool branch_taken_0x2f4770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4770u;
        // 0x2f4774: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4770) {
            ctx->pc = 0x2F4788u;
            goto label_2f4788;
        }
    }
    ctx->pc = 0x2F4778u;
label_2f4778:
    // 0x2f4778: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2f4778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_2f477c:
    // 0x2f477c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2f477cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2f4780:
    // 0x2f4780: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f4784:
    if (ctx->pc == 0x2F4784u) {
        ctx->pc = 0x2F4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4780u;
        // 0x2f4784: 0xc4402450  lwc1        $f0, 0x2450($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4788u;
        goto label_2f4788;
    }
    ctx->pc = 0x2F4780u;
    {
        const bool branch_taken_0x2f4780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4780u;
        // 0x2f4784: 0xc4402450  lwc1        $f0, 0x2450($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4780) {
            ctx->pc = 0x2F479Cu;
            goto label_2f479c;
        }
    }
    ctx->pc = 0x2F4788u;
label_2f4788:
    // 0x2f4788: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f4788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f478c:
    // 0x2f478c: 0xc456b78c  lwc1        $f22, -0x4874($v0)
    ctx->pc = 0x2f478cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2f4790:
    // 0x2f4790: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x2f4790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_2f4794:
    // 0x2f4794: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2f4794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_2f4798:
    // 0x2f4798: 0xc4402450  lwc1        $f0, 0x2450($v0)
    ctx->pc = 0x2f4798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f479c:
    // 0x2f479c: 0x24422450  addiu       $v0, $v0, 0x2450
    ctx->pc = 0x2f479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9296));
label_2f47a0:
    // 0x2f47a0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f47a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f47a4:
    // 0x2f47a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f47a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f47a8:
    // 0x2f47a8: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
label_2f47ac:
    if (ctx->pc == 0x2F47ACu) {
        ctx->pc = 0x2F47ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47A8u;
        // 0x2f47ac: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47B0u;
        goto label_2f47b0;
    }
    ctx->pc = 0x2F47A8u;
    {
        const bool branch_taken_0x2f47a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F47ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47A8u;
        // 0x2f47ac: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47a8) {
            ctx->pc = 0x2F47F0u;
            goto label_2f47f0;
        }
    }
    ctx->pc = 0x2F47B0u;
label_2f47b0:
    // 0x2f47b0: 0x8e2211d8  lw          $v0, 0x11D8($s1)
    ctx->pc = 0x2f47b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
label_2f47b4:
    // 0x2f47b4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2f47b8:
    if (ctx->pc == 0x2F47B8u) {
        ctx->pc = 0x2F47BCu;
        goto label_2f47bc;
    }
    ctx->pc = 0x2F47B4u;
    {
        const bool branch_taken_0x2f47b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f47b4) {
            ctx->pc = 0x2F47F0u;
            goto label_2f47f0;
        }
    }
    ctx->pc = 0x2F47BCu;
label_2f47bc:
    // 0x2f47bc: 0x8e221248  lw          $v0, 0x1248($s1)
    ctx->pc = 0x2f47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4680)));
label_2f47c0:
    // 0x2f47c0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_2f47c4:
    if (ctx->pc == 0x2F47C4u) {
        ctx->pc = 0x2F47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47C0u;
        // 0x2f47c4: 0x8e2205f8  lw          $v0, 0x5F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47C8u;
        goto label_2f47c8;
    }
    ctx->pc = 0x2F47C0u;
    {
        const bool branch_taken_0x2f47c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f47c0) {
            ctx->pc = 0x2F47C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F47C0u;
            // 0x2f47c4: 0x8e2205f8  lw          $v0, 0x5F8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4804u;
            goto label_2f4804;
        }
    }
    ctx->pc = 0x2F47C8u;
label_2f47c8:
    // 0x2f47c8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2f47c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2f47cc:
    // 0x2f47cc: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2f47ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2f47d0:
    // 0x2f47d0: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2f47d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2f47d4:
    // 0x2f47d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f47d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f47d8:
    // 0x2f47d8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2f47d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2f47dc:
    // 0x2f47dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f47dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f47e0:
    // 0x2f47e0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f47e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f47e4:
    // 0x2f47e4: 0x0  nop
    ctx->pc = 0x2f47e4u;
    // NOP
label_2f47e8:
    // 0x2f47e8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_2f47ec:
    if (ctx->pc == 0x2F47ECu) {
        ctx->pc = 0x2F47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47E8u;
        // 0x2f47ec: 0x8e2205f8  lw          $v0, 0x5F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47F0u;
        goto label_2f47f0;
    }
    ctx->pc = 0x2F47E8u;
    {
        const bool branch_taken_0x2f47e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f47e8) {
            ctx->pc = 0x2F47ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F47E8u;
            // 0x2f47ec: 0x8e2205f8  lw          $v0, 0x5F8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4804u;
            goto label_2f4804;
        }
    }
    ctx->pc = 0x2F47F0u;
label_2f47f0:
    // 0x2f47f0: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2f47f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2f47f4:
    // 0x2f47f4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f47f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2f47f8:
    // 0x2f47f8: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2f47f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_2f47fc:
    // 0x2f47fc: 0x1000006e  b           . + 4 + (0x6E << 2)
label_2f4800:
    if (ctx->pc == 0x2F4800u) {
        ctx->pc = 0x2F4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47FCu;
        // 0x2f4800: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4804u;
        goto label_2f4804;
    }
    ctx->pc = 0x2F47FCu;
    {
        const bool branch_taken_0x2f47fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47FCu;
        // 0x2f4800: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47fc) {
            ctx->pc = 0x2F49B8u;
            goto label_2f49b8;
        }
    }
    ctx->pc = 0x2F4804u;
label_2f4804:
    // 0x2f4804: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f4808:
    if (ctx->pc == 0x2F4808u) {
        ctx->pc = 0x2F4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4804u;
        // 0x2f4808: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F480Cu;
        goto label_2f480c;
    }
    ctx->pc = 0x2F4804u;
    {
        const bool branch_taken_0x2f4804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4804u;
        // 0x2f4808: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4804) {
            ctx->pc = 0x2F481Cu;
            goto label_2f481c;
        }
    }
    ctx->pc = 0x2F480Cu;
label_2f480c:
    // 0x2f480c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f480cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2f4810:
    // 0x2f4810: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f4810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f4814:
    // 0x2f4814: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f4818:
    if (ctx->pc == 0x2F4818u) {
        ctx->pc = 0x2F4818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4814u;
        // 0x2f4818: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F481Cu;
        goto label_2f481c;
    }
    ctx->pc = 0x2F4814u;
    {
        const bool branch_taken_0x2f4814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4814u;
        // 0x2f4818: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4814) {
            ctx->pc = 0x2F4834u;
            goto label_2f4834;
        }
    }
    ctx->pc = 0x2F481Cu;
label_2f481c:
    // 0x2f481c: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x2f481cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
label_2f4820:
    // 0x2f4820: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2f4824:
    if (ctx->pc == 0x2F4824u) {
        ctx->pc = 0x2F4828u;
        goto label_2f4828;
    }
    ctx->pc = 0x2F4820u;
    {
        const bool branch_taken_0x2f4820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4820) {
            ctx->pc = 0x2F483Cu;
            goto label_2f483c;
        }
    }
    ctx->pc = 0x2F4828u;
label_2f4828:
    // 0x2f4828: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f4828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f482c:
    // 0x2f482c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f482cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f4830:
    // 0x2f4830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f4830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4834:
    // 0x2f4834: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2f4834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2f4838:
    // 0x2f4838: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f4838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f483c:
    // 0x2f483c: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
label_2f4840:
    if (ctx->pc == 0x2F4840u) {
        ctx->pc = 0x2F4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F483Cu;
        // 0x2f4840: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4844u;
        goto label_2f4844;
    }
    ctx->pc = 0x2F483Cu;
    {
        const bool branch_taken_0x2f483c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F483Cu;
        // 0x2f4840: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f483c) {
            ctx->pc = 0x2F49D4u;
            goto label_2f49d4;
        }
    }
    ctx->pc = 0x2F4844u;
label_2f4844:
    // 0x2f4844: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f4844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f4848:
    // 0x2f4848: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f4848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f484c:
    // 0x2f484c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f484cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4850:
    // 0x2f4850: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f4850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f4854:
    // 0x2f4854: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f4854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f4858:
    // 0x2f4858: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2f4858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2f485c:
    // 0x2f485c: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x2f485cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2f4860:
    // 0x2f4860: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2f4860u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2f4864:
    // 0x2f4864: 0x16a00002  bnez        $s5, . + 4 + (0x2 << 2)
label_2f4868:
    if (ctx->pc == 0x2F4868u) {
        ctx->pc = 0x2F4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4864u;
        // 0x2f4868: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F486Cu;
        goto label_2f486c;
    }
    ctx->pc = 0x2F4864u;
    {
        const bool branch_taken_0x2f4864 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4864u;
        // 0x2f4868: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4864) {
            ctx->pc = 0x2F4870u;
            goto label_2f4870;
        }
    }
    ctx->pc = 0x2F486Cu;
label_2f486c:
    // 0x2f486c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2f486cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2f4870:
    // 0x2f4870: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f4870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4874:
    // 0x2f4874: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f4874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4878:
    // 0x2f4878: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2f4878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2f487c:
    // 0x2f487c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2f487cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2f4880:
    // 0x2f4880: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2f4880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2f4884:
    // 0x2f4884: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f4884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f4888:
    // 0x2f4888: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2f4888u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2f488c:
    // 0x2f488c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f488cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f4890:
    // 0x2f4890: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2f4890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4894:
    // 0x2f4894: 0x0  nop
    ctx->pc = 0x2f4894u;
    // NOP
label_2f4898:
    // 0x2f4898: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2f489c:
    if (ctx->pc == 0x2F489Cu) {
        ctx->pc = 0x2F489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4898u;
        // 0x2f489c: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48A0u;
        goto label_2f48a0;
    }
    ctx->pc = 0x2F4898u;
    {
        const bool branch_taken_0x2f4898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4898u;
        // 0x2f489c: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4898) {
            ctx->pc = 0x2F48D4u;
            goto label_2f48d4;
        }
    }
    ctx->pc = 0x2F48A0u;
label_2f48a0:
    // 0x2f48a0: 0xc0f735c  jal         func_3DCD70
label_2f48a4:
    if (ctx->pc == 0x2F48A4u) {
        ctx->pc = 0x2F48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48A0u;
        // 0x2f48a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48A8u;
        goto label_2f48a8;
    }
    ctx->pc = 0x2F48A0u;
    SET_GPR_U32(ctx, 31, 0x2F48A8u);
    ctx->pc = 0x2F48A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48A0u;
    // 0x2f48a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x2F48A0u, 0x2F48A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F48A8u;
label_2f48a8:
    // 0x2f48a8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2f48a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f48ac:
    // 0x2f48ac: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2f48acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f48b0:
    // 0x2f48b0: 0x0  nop
    ctx->pc = 0x2f48b0u;
    // NOP
label_2f48b4:
    // 0x2f48b4: 0x0  nop
    ctx->pc = 0x2f48b4u;
    // NOP
label_2f48b8:
    // 0x2f48b8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2f48b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2f48bc:
    // 0x2f48bc: 0x0  nop
    ctx->pc = 0x2f48bcu;
    // NOP
label_2f48c0:
    // 0x2f48c0: 0x0  nop
    ctx->pc = 0x2f48c0u;
    // NOP
label_2f48c4:
    // 0x2f48c4: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2f48c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_2f48c8:
    // 0x2f48c8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2f48c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f48cc:
    // 0x2f48cc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2f48ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f48d0:
    // 0x2f48d0: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2f48d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f48d4:
    // 0x2f48d4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2f48d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f48d8:
    // 0x2f48d8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2f48d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f48dc:
    // 0x2f48dc: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2f48dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f48e0:
    // 0x2f48e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f48e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2f48e4:
    // 0x2f48e4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f48e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2f48e8:
    // 0x2f48e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f48e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f48ec:
    // 0x2f48ec: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2f48ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2f48f0:
    // 0x2f48f0: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x2f48f0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f48f4:
    // 0x2f48f4: 0x46026834  c.lt.s      $f13, $f2
    ctx->pc = 0x2f48f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f48f8:
    // 0x2f48f8: 0x0  nop
    ctx->pc = 0x2f48f8u;
    // NOP
label_2f48fc:
    // 0x2f48fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f4900:
    if (ctx->pc == 0x2F4900u) {
        ctx->pc = 0x2F4904u;
        goto label_2f4904;
    }
    ctx->pc = 0x2F48FCu;
    {
        const bool branch_taken_0x2f48fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f48fc) {
            ctx->pc = 0x2F490Cu;
            goto label_2f490c;
        }
    }
    ctx->pc = 0x2F4904u;
label_2f4904:
    // 0x2f4904: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f4908:
    if (ctx->pc == 0x2F4908u) {
        ctx->pc = 0x2F4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4904u;
        // 0x2f4908: 0x46001346  mov.s       $f13, $f2 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F490Cu;
        goto label_2f490c;
    }
    ctx->pc = 0x2F4904u;
    {
        const bool branch_taken_0x2f4904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4904u;
        // 0x2f4908: 0x46001346  mov.s       $f13, $f2 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4904) {
            ctx->pc = 0x2F491Cu;
            goto label_2f491c;
        }
    }
    ctx->pc = 0x2F490Cu;
label_2f490c:
    // 0x2f490c: 0x460da034  c.lt.s      $f20, $f13
    ctx->pc = 0x2f490cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4910:
    // 0x2f4910: 0x0  nop
    ctx->pc = 0x2f4910u;
    // NOP
label_2f4914:
    // 0x2f4914: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f4918:
    if (ctx->pc == 0x2F4918u) {
        ctx->pc = 0x2F4918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4914u;
        // 0x2f4918: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F491Cu;
        goto label_2f491c;
    }
    ctx->pc = 0x2F4914u;
    {
        const bool branch_taken_0x2f4914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4914) {
            ctx->pc = 0x2F4918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4914u;
            // 0x2f4918: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F491Cu;
            goto label_2f491c;
        }
    }
    ctx->pc = 0x2F491Cu;
label_2f491c:
    // 0x2f491c: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2f491cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_2f4920:
    // 0x2f4920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f4920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f4924:
    // 0x2f4924: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f4924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f4928:
    // 0x2f4928: 0x0  nop
    ctx->pc = 0x2f4928u;
    // NOP
label_2f492c:
    // 0x2f492c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f492cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2f4930:
    // 0x2f4930: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2f4930u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_2f4934:
    // 0x2f4934: 0xc0e404c  jal         func_390130
label_2f4938:
    if (ctx->pc == 0x2F4938u) {
        ctx->pc = 0x2F493Cu;
        goto label_2f493c;
    }
    ctx->pc = 0x2F4934u;
    SET_GPR_U32(ctx, 31, 0x2F493Cu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2F4934u, 0x2F493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F493Cu;
label_2f493c:
    // 0x2f493c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2f493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4940:
    // 0x2f4940: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2f4940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f4944:
    // 0x2f4944: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2f4944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f4948:
    // 0x2f4948: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x2f4948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f494c:
    // 0x2f494c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2f494cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2f4950:
    // 0x2f4950: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2f4950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2f4954:
    // 0x2f4954: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2f4954u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_2f4958:
    // 0x2f4958: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f4958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2f495c:
    // 0x2f495c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f495cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2f4960:
    // 0x2f4960: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f4960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f4964:
    // 0x2f4964: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2f4964u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2f4968:
    // 0x2f4968: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2f4968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f496c:
    // 0x2f496c: 0x0  nop
    ctx->pc = 0x2f496cu;
    // NOP
label_2f4970:
    // 0x2f4970: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2f4974:
    if (ctx->pc == 0x2F4974u) {
        ctx->pc = 0x2F4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4970u;
        // 0x2f4974: 0x46010402  mul.s       $f16, $f0, $f1 (Delay Slot)
        ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4978u;
        goto label_2f4978;
    }
    ctx->pc = 0x2F4970u;
    {
        const bool branch_taken_0x2f4970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4970u;
        // 0x2f4974: 0x46010402  mul.s       $f16, $f0, $f1 (Delay Slot)
        ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4970) {
            ctx->pc = 0x2F4988u;
            goto label_2f4988;
        }
    }
    ctx->pc = 0x2F4978u;
label_2f4978:
    // 0x2f4978: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f4978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_2f497c:
    // 0x2f497c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f497cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f4980:
    // 0x2f4980: 0x0  nop
    ctx->pc = 0x2f4980u;
    // NOP
label_2f4984:
    // 0x2f4984: 0x46100401  sub.s       $f16, $f0, $f16
    ctx->pc = 0x2f4984u;
    ctx->f[16] = FPU_SUB_S(ctx->f[0], ctx->f[16]);
label_2f4988:
    // 0x2f4988: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f4988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f498c:
    // 0x2f498c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f498cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f4990:
    // 0x2f4990: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f4990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f4994:
    // 0x2f4994: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f4994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f4998:
    // 0x2f4998: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2f4998u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2f499c:
    // 0x2f499c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f499cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f49a0:
    // 0x2f49a0: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2f49a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
label_2f49a4:
    // 0x2f49a4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2f49a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2f49a8:
    // 0x2f49a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f49ac:
    if (ctx->pc == 0x2F49ACu) {
        ctx->pc = 0x2F49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49A8u;
        // 0x2f49ac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F49B0u;
        goto label_2f49b0;
    }
    ctx->pc = 0x2F49A8u;
    {
        const bool branch_taken_0x2f49a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49A8u;
        // 0x2f49ac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49a8) {
            ctx->pc = 0x2F49B8u;
            goto label_2f49b8;
        }
    }
    ctx->pc = 0x2F49B0u;
label_2f49b0:
    // 0x2f49b0: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x2f49b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
label_2f49b4:
    // 0x2f49b4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2f49b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2f49b8:
    // 0x2f49b8: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2f49b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_2f49bc:
    // 0x2f49bc: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2f49bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_2f49c0:
    // 0x2f49c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f49c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f49c4:
    // 0x2f49c4: 0xc0bd346  jal         func_2F4D18
label_2f49c8:
    if (ctx->pc == 0x2F49C8u) {
        ctx->pc = 0x2F49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49C4u;
        // 0x2f49c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F49CCu;
        goto label_2f49cc;
    }
    ctx->pc = 0x2F49C4u;
    SET_GPR_U32(ctx, 31, 0x2F49CCu);
    ctx->pc = 0x2F49C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F49C4u;
    // 0x2f49c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D18u, 0x2F49C4u, 0x2F49CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F49CCu;
label_2f49cc:
    // 0x2f49cc: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_2f49d0:
    if (ctx->pc == 0x2F49D0u) {
        ctx->pc = 0x2F49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49CCu;
        // 0x2f49d0: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F49D4u;
        goto label_2f49d4;
    }
    ctx->pc = 0x2F49CCu;
    {
        const bool branch_taken_0x2f49cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49CCu;
        // 0x2f49d0: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49cc) {
            ctx->pc = 0x2F4C6Cu;
            goto label_2f4c6c;
        }
    }
    ctx->pc = 0x2F49D4u;
label_2f49d4:
    // 0x2f49d4: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f49d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2f49d8:
    // 0x2f49d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f49d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f49dc:
    // 0x2f49dc: 0x144000bf  bnez        $v0, . + 4 + (0xBF << 2)
label_2f49e0:
    if (ctx->pc == 0x2F49E0u) {
        ctx->pc = 0x2F49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49DCu;
        // 0x2f49e0: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F49E4u;
        goto label_2f49e4;
    }
    ctx->pc = 0x2F49DCu;
    {
        const bool branch_taken_0x2f49dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49DCu;
        // 0x2f49e0: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49dc) {
            ctx->pc = 0x2F4CDCu;
            goto label_2f4cdc;
        }
    }
    ctx->pc = 0x2F49E4u;
label_2f49e4:
    // 0x2f49e4: 0x568000a1  bnel        $s4, $zero, . + 4 + (0xA1 << 2)
label_2f49e8:
    if (ctx->pc == 0x2F49E8u) {
        ctx->pc = 0x2F49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49E4u;
        // 0x2f49e8: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F49ECu;
        goto label_2f49ec;
    }
    ctx->pc = 0x2F49E4u;
    {
        const bool branch_taken_0x2f49e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f49e4) {
            ctx->pc = 0x2F49E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F49E4u;
            // 0x2f49e8: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4C6Cu;
            goto label_2f4c6c;
        }
    }
    ctx->pc = 0x2F49ECu;
label_2f49ec:
    // 0x2f49ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f49f0:
    // 0x2f49f0: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x2f49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_2f49f4:
    // 0x2f49f4: 0x8c700100  lw          $s0, 0x100($v1)
    ctx->pc = 0x2f49f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_2f49f8:
    // 0x2f49f8: 0xc0f70ce  jal         func_3DC338
label_2f49fc:
    if (ctx->pc == 0x2F49FCu) {
        ctx->pc = 0x2F49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49F8u;
        // 0x2f49fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A00u;
        goto label_2f4a00;
    }
    ctx->pc = 0x2F49F8u;
    SET_GPR_U32(ctx, 31, 0x2F4A00u);
    ctx->pc = 0x2F49FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F49F8u;
    // 0x2f49fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2F49F8u, 0x2F4A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A00u;
label_2f4a00:
    // 0x2f4a00: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2f4a04:
    if (ctx->pc == 0x2F4A04u) {
        ctx->pc = 0x2F4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A00u;
        // 0x2f4a04: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A08u;
        goto label_2f4a08;
    }
    ctx->pc = 0x2F4A00u;
    {
        const bool branch_taken_0x2f4a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4a00) {
            ctx->pc = 0x2F4A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4A00u;
            // 0x2f4a04: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4A14u;
            goto label_2f4a14;
        }
    }
    ctx->pc = 0x2F4A08u;
label_2f4a08:
    // 0x2f4a08: 0xc0c4900  jal         func_312400
label_2f4a0c:
    if (ctx->pc == 0x2F4A0Cu) {
        ctx->pc = 0x2F4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A08u;
        // 0x2f4a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A10u;
        goto label_2f4a10;
    }
    ctx->pc = 0x2F4A08u;
    SET_GPR_U32(ctx, 31, 0x2F4A10u);
    ctx->pc = 0x2F4A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A08u;
    // 0x2f4a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2F4A08u, 0x2F4A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A10u;
label_2f4a10:
    // 0x2f4a10: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x2f4a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4a14:
    // 0x2f4a14: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2f4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2f4a18:
    // 0x2f4a18: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x2f4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_2f4a1c:
    // 0x2f4a1c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f4a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f4a20:
    // 0x2f4a20: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f4a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f4a24:
    // 0x2f4a24: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2f4a24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f4a28:
    // 0x2f4a28: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f4a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4a2c:
    // 0x2f4a2c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2f4a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f4a30:
    // 0x2f4a30: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f4a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4a34:
    // 0x2f4a34: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2f4a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f4a38:
    // 0x2f4a38: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f4a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4a3c:
    // 0x2f4a3c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2f4a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2f4a40:
    // 0x2f4a40: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2f4a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4a44:
    // 0x2f4a44: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2f4a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f4a48:
    // 0x2f4a48: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f4a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4a4c:
    // 0x2f4a4c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2f4a4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_2f4a50:
    // 0x2f4a50: 0xc60200a0  lwc1        $f2, 0xA0($s0)
    ctx->pc = 0x2f4a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f4a54:
    // 0x2f4a54: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x2f4a54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
label_2f4a58:
    // 0x2f4a58: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2f4a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_2f4a5c:
    // 0x2f4a5c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x2f4a5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_2f4a60:
    // 0x2f4a60: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x2f4a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_2f4a64:
    // 0x2f4a64: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x2f4a64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2f4a68:
    // 0x2f4a68: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f4a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2f4a6c:
    // 0x2f4a6c: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x2f4a6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2f4a70:
    // 0x2f4a70: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f4a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f4a74:
    // 0x2f4a74: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2f4a74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2f4a78:
    // 0x2f4a78: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f4a78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f4a7c:
    // 0x2f4a7c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2f4a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f4a80:
    // 0x2f4a80: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x2f4a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f4a84:
    // 0x2f4a84: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2f4a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f4a88:
    // 0x2f4a88: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2f4a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4a8c:
    // 0x2f4a8c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2f4a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4a90:
    // 0x2f4a90: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x2f4a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f4a94:
    // 0x2f4a94: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2f4a94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2f4a98:
    // 0x2f4a98: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2f4a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2f4a9c:
    // 0x2f4a9c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2f4a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2f4aa0:
    // 0x2f4aa0: 0xc0f6a96  jal         func_3DAA58
label_2f4aa4:
    if (ctx->pc == 0x2F4AA4u) {
        ctx->pc = 0x2F4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AA0u;
        // 0x2f4aa4: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4AA8u;
        goto label_2f4aa8;
    }
    ctx->pc = 0x2F4AA0u;
    SET_GPR_U32(ctx, 31, 0x2F4AA8u);
    ctx->pc = 0x2F4AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4AA0u;
    // 0x2f4aa4: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F4AA0u, 0x2F4AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4AA8u;
label_2f4aa8:
    // 0x2f4aa8: 0xc0f6a96  jal         func_3DAA58
label_2f4aac:
    if (ctx->pc == 0x2F4AACu) {
        ctx->pc = 0x2F4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AA8u;
        // 0x2f4aac: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4AB0u;
        goto label_2f4ab0;
    }
    ctx->pc = 0x2F4AA8u;
    SET_GPR_U32(ctx, 31, 0x2F4AB0u);
    ctx->pc = 0x2F4AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4AA8u;
    // 0x2f4aac: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F4AA8u, 0x2F4AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4AB0u;
label_2f4ab0:
    // 0x2f4ab0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2f4ab0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f4ab4:
    // 0x2f4ab4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2f4ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f4ab8:
    // 0x2f4ab8: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x2f4ab8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4abc:
    // 0x2f4abc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2f4abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f4ac0:
    // 0x2f4ac0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2f4ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_2f4ac4:
    // 0x2f4ac4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f4ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f4ac8:
    // 0x2f4ac8: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x2f4ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_2f4acc:
    // 0x2f4acc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f4accu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f4ad0:
    // 0x2f4ad0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2f4ad0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f4ad4:
    // 0x2f4ad4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f4ad4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f4ad8:
    // 0x2f4ad8: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2f4ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f4adc:
    // 0x2f4adc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2f4adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f4ae0:
    // 0x2f4ae0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2f4ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f4ae4:
    // 0x2f4ae4: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2f4ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f4ae8:
    // 0x2f4ae8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f4ae8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f4aec:
    // 0x2f4aec: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f4aecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f4af0:
    // 0x2f4af0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2f4af0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f4af4:
    // 0x2f4af4: 0x0  nop
    ctx->pc = 0x2f4af4u;
    // NOP
label_2f4af8:
    // 0x2f4af8: 0x0  nop
    ctx->pc = 0x2f4af8u;
    // NOP
label_2f4afc:
    // 0x2f4afc: 0x46010084  c1          0x10084
    ctx->pc = 0x2f4afcu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_2f4b00:
    // 0x2f4b00: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x2f4b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2f4b04:
    // 0x2f4b04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f4b04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f4b08:
    // 0x2f4b08: 0x0  nop
    ctx->pc = 0x2f4b08u;
    // NOP
label_2f4b0c:
    // 0x2f4b0c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f4b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4b10:
    // 0x2f4b10: 0x0  nop
    ctx->pc = 0x2f4b10u;
    // NOP
label_2f4b14:
    // 0x2f4b14: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2f4b18:
    if (ctx->pc == 0x2F4B18u) {
        ctx->pc = 0x2F4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B14u;
        // 0x2f4b18: 0xe7a200c0  swc1        $f2, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B1Cu;
        goto label_2f4b1c;
    }
    ctx->pc = 0x2F4B14u;
    {
        const bool branch_taken_0x2f4b14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B14u;
        // 0x2f4b18: 0xe7a200c0  swc1        $f2, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b14) {
            ctx->pc = 0x2F4B40u;
            goto label_2f4b40;
        }
    }
    ctx->pc = 0x2F4B1Cu;
label_2f4b1c:
    // 0x2f4b1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f4b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f4b20:
    // 0x2f4b20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f4b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f4b24:
    // 0x2f4b24: 0x0  nop
    ctx->pc = 0x2f4b24u;
    // NOP
label_2f4b28:
    // 0x2f4b28: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f4b28u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_2f4b2c:
    // 0x2f4b2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f4b2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f4b30:
    // 0x2f4b30: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f4b30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f4b34:
    // 0x2f4b34: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f4b34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f4b38:
    // 0x2f4b38: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f4b38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f4b3c:
    // 0x2f4b3c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2f4b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f4b40:
    // 0x2f4b40: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x2f4b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2f4b44:
    // 0x2f4b44: 0xc07a8b2  jal         func_1EA2C8
label_2f4b48:
    if (ctx->pc == 0x2F4B48u) {
        ctx->pc = 0x2F4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B44u;
        // 0x2f4b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B4Cu;
        goto label_2f4b4c;
    }
    ctx->pc = 0x2F4B44u;
    SET_GPR_U32(ctx, 31, 0x2F4B4Cu);
    ctx->pc = 0x2F4B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B44u;
    // 0x2f4b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2F4B44u, 0x2F4B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B4Cu;
label_2f4b4c:
    // 0x2f4b4c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2f4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_2f4b50:
    // 0x2f4b50: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2f4b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2f4b54:
    // 0x2f4b54: 0xc4601b6c  lwc1        $f0, 0x1B6C($v1)
    ctx->pc = 0x2f4b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4b58:
    // 0x2f4b58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f4b58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4b5c:
    // 0x2f4b5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f4b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4b60:
    // 0x2f4b60: 0xc076e46  jal         func_1DB918
label_2f4b64:
    if (ctx->pc == 0x2F4B64u) {
        ctx->pc = 0x2F4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B60u;
        // 0x2f4b64: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B68u;
        goto label_2f4b68;
    }
    ctx->pc = 0x2F4B60u;
    SET_GPR_U32(ctx, 31, 0x2F4B68u);
    ctx->pc = 0x2F4B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B60u;
    // 0x2f4b64: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F4B60u, 0x2F4B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B68u;
label_2f4b68:
    // 0x2f4b68: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x2f4b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
label_2f4b6c:
    // 0x2f4b6c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2f4b6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4b70:
    // 0x2f4b70: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f4b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f4b74:
    // 0x2f4b74: 0x34a5ffea  ori         $a1, $a1, 0xFFEA
    ctx->pc = 0x2f4b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65514);
label_2f4b78:
    // 0x2f4b78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f4b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4b7c:
    // 0x2f4b7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f4b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4b80:
    // 0x2f4b80: 0x27a90134  addiu       $t1, $sp, 0x134
    ctx->pc = 0x2f4b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_2f4b84:
    // 0x2f4b84: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2f4b84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4b88:
    // 0x2f4b88: 0xc077940  jal         func_1DE500
label_2f4b8c:
    if (ctx->pc == 0x2F4B8Cu) {
        ctx->pc = 0x2F4B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B88u;
        // 0x2f4b8c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B90u;
        goto label_2f4b90;
    }
    ctx->pc = 0x2F4B88u;
    SET_GPR_U32(ctx, 31, 0x2F4B90u);
    ctx->pc = 0x2F4B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B88u;
    // 0x2f4b8c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x2F4B88u, 0x2F4B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B90u;
label_2f4b90:
    // 0x2f4b90: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_2f4b94:
    if (ctx->pc == 0x2F4B94u) {
        ctx->pc = 0x2F4B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B90u;
        // 0x2f4b94: 0x8fa20108  lw          $v0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4B98u;
        goto label_2f4b98;
    }
    ctx->pc = 0x2F4B90u;
    {
        const bool branch_taken_0x2f4b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B90u;
        // 0x2f4b94: 0x8fa20108  lw          $v0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b90) {
            ctx->pc = 0x2F4C5Cu;
            goto label_2f4c5c;
        }
    }
    ctx->pc = 0x2F4B98u;
label_2f4b98:
    // 0x2f4b98: 0x38430008  xori        $v1, $v0, 0x8
    ctx->pc = 0x2f4b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2f4b9c:
    // 0x2f4b9c: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
label_2f4ba0:
    if (ctx->pc == 0x2F4BA0u) {
        ctx->pc = 0x2F4BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B9Cu;
        // 0x2f4ba0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4BA4u;
        goto label_2f4ba4;
    }
    ctx->pc = 0x2F4B9Cu;
    {
        const bool branch_taken_0x2f4b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B9Cu;
        // 0x2f4ba0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b9c) {
            ctx->pc = 0x2F4C60u;
            goto label_2f4c60;
        }
    }
    ctx->pc = 0x2F4BA4u;
label_2f4ba4:
    // 0x2f4ba4: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x2f4ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2f4ba8:
    // 0x2f4ba8: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x2f4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
label_2f4bac:
    // 0x2f4bac: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2f4bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2f4bb0:
    // 0x2f4bb0: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x2f4bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_2f4bb4:
    // 0x2f4bb4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_2f4bb8:
    if (ctx->pc == 0x2F4BB8u) {
        ctx->pc = 0x2F4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BB4u;
        // 0x2f4bb8: 0x283102b  sltu        $v0, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4BBCu;
        goto label_2f4bbc;
    }
    ctx->pc = 0x2F4BB4u;
    {
        const bool branch_taken_0x2f4bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BB4u;
        // 0x2f4bb8: 0x283102b  sltu        $v0, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bb4) {
            ctx->pc = 0x2F4C60u;
            goto label_2f4c60;
        }
    }
    ctx->pc = 0x2F4BBCu;
label_2f4bbc:
    // 0x2f4bbc: 0x8e241220  lw          $a0, 0x1220($s1)
    ctx->pc = 0x2f4bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4640)));
label_2f4bc0:
    // 0x2f4bc0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f4bc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4bc4:
    // 0x2f4bc4: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x2f4bc4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_2f4bc8:
    // 0x2f4bc8: 0x10640024  beq         $v1, $a0, . + 4 + (0x24 << 2)
label_2f4bcc:
    if (ctx->pc == 0x2F4BCCu) {
        ctx->pc = 0x2F4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BC8u;
        // 0x2f4bcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4BD0u;
        goto label_2f4bd0;
    }
    ctx->pc = 0x2F4BC8u;
    {
        const bool branch_taken_0x2f4bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BC8u;
        // 0x2f4bcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bc8) {
            ctx->pc = 0x2F4C5Cu;
            goto label_2f4c5c;
        }
    }
    ctx->pc = 0x2F4BD0u;
label_2f4bd0:
    // 0x2f4bd0: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2f4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2f4bd4:
    // 0x2f4bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4bd8:
    // 0x2f4bd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4bdc:
    // 0x2f4bdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f4be0:
    // 0x2f4be0: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2f4be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4be4:
    // 0x2f4be4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f4be8:
    // 0x2f4be8: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2f4be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2f4bec:
    // 0x2f4bec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f4becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4bf0:
    // 0x2f4bf0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f4bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2f4bf4:
    // 0x2f4bf4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f4bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4bf8:
    // 0x2f4bf8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2f4bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2f4bfc:
    // 0x2f4bfc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f4bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4c00:
    // 0x2f4c00: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f4c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_2f4c04:
    // 0x2f4c04: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2f4c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f4c08:
    // 0x2f4c08: 0xc0bff58  jal         func_2FFD60
label_2f4c0c:
    if (ctx->pc == 0x2F4C0Cu) {
        ctx->pc = 0x2F4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C08u;
        // 0x2f4c0c: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4C10u;
        goto label_2f4c10;
    }
    ctx->pc = 0x2F4C08u;
    SET_GPR_U32(ctx, 31, 0x2F4C10u);
    ctx->pc = 0x2F4C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C08u;
    // 0x2f4c0c: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFD60u, 0x2F4C08u, 0x2F4C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C10u;
label_2f4c10:
    // 0x2f4c10: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2f4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2f4c14:
    // 0x2f4c14: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2f4c14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2f4c18:
    // 0x2f4c18: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x2f4c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2f4c1c:
    // 0x2f4c1c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2f4c1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_2f4c20:
    // 0x2f4c20: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2f4c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2f4c24:
    // 0x2f4c24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f4c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f4c28:
    // 0x2f4c28: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2f4c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f4c2c:
    // 0x2f4c2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4c30:
    // 0x2f4c30: 0xc0bcea8  jal         func_2F3AA0
label_2f4c34:
    if (ctx->pc == 0x2F4C34u) {
        ctx->pc = 0x2F4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C30u;
        // 0x2f4c34: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4C38u;
        goto label_2f4c38;
    }
    ctx->pc = 0x2F4C30u;
    SET_GPR_U32(ctx, 31, 0x2F4C38u);
    ctx->pc = 0x2F4C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C30u;
    // 0x2f4c34: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3AA0u, 0x2F4C30u, 0x2F4C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C38u;
label_2f4c38:
    // 0x2f4c38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f4c3c:
    if (ctx->pc == 0x2F4C3Cu) {
        ctx->pc = 0x2F4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C38u;
        // 0x2f4c3c: 0x8fa20108  lw          $v0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4C40u;
        goto label_2f4c40;
    }
    ctx->pc = 0x2F4C38u;
    {
        const bool branch_taken_0x2f4c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C38u;
        // 0x2f4c3c: 0x8fa20108  lw          $v0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c38) {
            ctx->pc = 0x2F4C5Cu;
            goto label_2f4c5c;
        }
    }
    ctx->pc = 0x2F4C40u;
label_2f4c40:
    // 0x2f4c40: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2f4c40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2f4c44:
    // 0x2f4c44: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x2f4c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2f4c48:
    // 0x2f4c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4c4c:
    // 0x2f4c4c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2f4c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2f4c50:
    // 0x2f4c50: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2f4c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f4c54:
    // 0x2f4c54: 0xc0bd5f6  jal         func_2F57D8
label_2f4c58:
    if (ctx->pc == 0x2F4C58u) {
        ctx->pc = 0x2F4C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C54u;
        // 0x2f4c58: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4C5Cu;
        goto label_2f4c5c;
    }
    ctx->pc = 0x2F4C54u;
    SET_GPR_U32(ctx, 31, 0x2F4C5Cu);
    ctx->pc = 0x2F4C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C54u;
    // 0x2f4c58: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F57D8u, 0x2F4C54u, 0x2F4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C5Cu;
label_2f4c5c:
    // 0x2f4c5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f4c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f4c60:
    // 0x2f4c60: 0xc076e38  jal         func_1DB8E0
label_2f4c64:
    if (ctx->pc == 0x2F4C64u) {
        ctx->pc = 0x2F4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C60u;
        // 0x2f4c64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4C68u;
        goto label_2f4c68;
    }
    ctx->pc = 0x2F4C60u;
    SET_GPR_U32(ctx, 31, 0x2F4C68u);
    ctx->pc = 0x2F4C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C60u;
    // 0x2f4c64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2F4C60u, 0x2F4C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C68u;
label_2f4c68:
    // 0x2f4c68: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2f4c6c:
    // 0x2f4c6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f4c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4c70:
    // 0x2f4c70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f4c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f4c74:
    // 0x2f4c74: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_2f4c78:
    if (ctx->pc == 0x2F4C78u) {
        ctx->pc = 0x2F4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C74u;
        // 0x2f4c78: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4C7Cu;
        goto label_2f4c7c;
    }
    ctx->pc = 0x2F4C74u;
    {
        const bool branch_taken_0x2f4c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C74u;
        // 0x2f4c78: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c74) {
            ctx->pc = 0x2F4CDCu;
            goto label_2f4cdc;
        }
    }
    ctx->pc = 0x2F4C7Cu;
label_2f4c7c:
    // 0x2f4c7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f4c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f4c80:
    // 0x2f4c80: 0x9043b837  lbu         $v1, -0x47C9($v0)
    ctx->pc = 0x2f4c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948919)));
label_2f4c84:
    // 0x2f4c84: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
label_2f4c88:
    if (ctx->pc == 0x2F4C88u) {
        ctx->pc = 0x2F4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C84u;
        // 0x2f4c88: 0xdfb10148  ld          $s1, 0x148($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4C8Cu;
        goto label_2f4c8c;
    }
    ctx->pc = 0x2F4C84u;
    {
        const bool branch_taken_0x2f4c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4c84) {
            ctx->pc = 0x2F4C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4C84u;
            // 0x2f4c88: 0xdfb10148  ld          $s1, 0x148($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4CE0u;
            goto label_2f4ce0;
        }
    }
    ctx->pc = 0x2F4C8Cu;
label_2f4c8c:
    // 0x2f4c8c: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
label_2f4c90:
    if (ctx->pc == 0x2F4C90u) {
        ctx->pc = 0x2F4C94u;
        goto label_2f4c94;
    }
    ctx->pc = 0x2F4C8Cu;
    {
        const bool branch_taken_0x2f4c8c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4c8c) {
            ctx->pc = 0x2F4CCCu;
            goto label_2f4ccc;
        }
    }
    ctx->pc = 0x2F4C94u;
label_2f4c94:
    // 0x2f4c94: 0xc62112a8  lwc1        $f1, 0x12A8($s1)
    ctx->pc = 0x2f4c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4c98:
    // 0x2f4c98: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2f4c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2f4c9c:
    // 0x2f4c9c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2f4c9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2f4ca0:
    // 0x2f4ca0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f4ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f4ca4:
    // 0x2f4ca4: 0x0  nop
    ctx->pc = 0x2f4ca4u;
    // NOP
label_2f4ca8:
    // 0x2f4ca8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f4ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4cac:
    // 0x2f4cac: 0x0  nop
    ctx->pc = 0x2f4cacu;
    // NOP
label_2f4cb0:
    // 0x2f4cb0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2f4cb4:
    if (ctx->pc == 0x2F4CB4u) {
        ctx->pc = 0x2F4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CB0u;
        // 0x2f4cb4: 0x34820001  ori         $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4CB8u;
        goto label_2f4cb8;
    }
    ctx->pc = 0x2F4CB0u;
    {
        const bool branch_taken_0x2f4cb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CB0u;
        // 0x2f4cb4: 0x34820001  ori         $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cb0) {
            ctx->pc = 0x2F4CC4u;
            goto label_2f4cc4;
        }
    }
    ctx->pc = 0x2F4CB8u;
label_2f4cb8:
    // 0x2f4cb8: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
label_2f4cbc:
    if (ctx->pc == 0x2F4CBCu) {
        ctx->pc = 0x2F4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CB8u;
        // 0x2f4cbc: 0x34822000  ori         $v0, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4CC0u;
        goto label_2f4cc0;
    }
    ctx->pc = 0x2F4CB8u;
    {
        const bool branch_taken_0x2f4cb8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CB8u;
        // 0x2f4cbc: 0x34822000  ori         $v0, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cb8) {
            ctx->pc = 0x2F4CD4u;
            goto label_2f4cd4;
        }
    }
    ctx->pc = 0x2F4CC0u;
label_2f4cc0:
    // 0x2f4cc0: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x2f4cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_2f4cc4:
    // 0x2f4cc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f4cc8:
    if (ctx->pc == 0x2F4CC8u) {
        ctx->pc = 0x2F4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CC4u;
        // 0x2f4cc8: 0xae37121c  sw          $s7, 0x121C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4636), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4CCCu;
        goto label_2f4ccc;
    }
    ctx->pc = 0x2F4CC4u;
    {
        const bool branch_taken_0x2f4cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CC4u;
        // 0x2f4cc8: 0xae37121c  sw          $s7, 0x121C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4636), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cc4) {
            ctx->pc = 0x2F4CD4u;
            goto label_2f4cd4;
        }
    }
    ctx->pc = 0x2F4CCCu;
label_2f4ccc:
    // 0x2f4ccc: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_2f4cd0:
    if (ctx->pc == 0x2F4CD0u) {
        ctx->pc = 0x2F4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CCCu;
        // 0x2f4cd0: 0x34822000  ori         $v0, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4CD4u;
        goto label_2f4cd4;
    }
    ctx->pc = 0x2F4CCCu;
    {
        const bool branch_taken_0x2f4ccc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CCCu;
        // 0x2f4cd0: 0x34822000  ori         $v0, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ccc) {
            ctx->pc = 0x2F4CD8u;
            goto label_2f4cd8;
        }
    }
    ctx->pc = 0x2F4CD4u;
label_2f4cd4:
    // 0x2f4cd4: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f4cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
label_2f4cd8:
    // 0x2f4cd8: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x2f4cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2f4cdc:
    // 0x2f4cdc: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x2f4cdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_2f4ce0:
    // 0x2f4ce0: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x2f4ce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_2f4ce4:
    // 0x2f4ce4: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x2f4ce4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_2f4ce8:
    // 0x2f4ce8: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x2f4ce8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2f4cec:
    // 0x2f4cec: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x2f4cecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_2f4cf0:
    // 0x2f4cf0: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x2f4cf0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_2f4cf4:
    // 0x2f4cf4: 0xdfb70178  ld          $s7, 0x178($sp)
    ctx->pc = 0x2f4cf4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 376)));
label_2f4cf8:
    // 0x2f4cf8: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x2f4cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_2f4cfc:
    // 0x2f4cfc: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x2f4cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2f4d00:
    // 0x2f4d00: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2f4d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2f4d04:
    // 0x2f4d04: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x2f4d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f4d08:
    // 0x2f4d08: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x2f4d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f4d0c:
    // 0x2f4d0c: 0x3e00008  jr          $ra
label_2f4d10:
    if (ctx->pc == 0x2F4D10u) {
        ctx->pc = 0x2F4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D0Cu;
        // 0x2f4d10: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4D14u;
        goto label_2f4d14;
    }
    ctx->pc = 0x2F4D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D0Cu;
        // 0x2f4d10: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4D14u;
label_2f4d14:
    // 0x2f4d14: 0x0  nop
    ctx->pc = 0x2f4d14u;
    // NOP
    ctx->pc = 0x2f4d18u;
}
