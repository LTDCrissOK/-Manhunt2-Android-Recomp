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

// Function: sub_002F00C8
// Address: 0x2f00c8 - 0x2f0480
void sub_002F00C8_0x2f00c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F00C8_0x2f00c8");
#endif

    switch (ctx->pc) {
        case 0x2f00c8u: goto label_2f00c8;
        case 0x2f00ccu: goto label_2f00cc;
        case 0x2f00d0u: goto label_2f00d0;
        case 0x2f00d4u: goto label_2f00d4;
        case 0x2f00d8u: goto label_2f00d8;
        case 0x2f00dcu: goto label_2f00dc;
        case 0x2f00e0u: goto label_2f00e0;
        case 0x2f00e4u: goto label_2f00e4;
        case 0x2f00e8u: goto label_2f00e8;
        case 0x2f00ecu: goto label_2f00ec;
        case 0x2f00f0u: goto label_2f00f0;
        case 0x2f00f4u: goto label_2f00f4;
        case 0x2f00f8u: goto label_2f00f8;
        case 0x2f00fcu: goto label_2f00fc;
        case 0x2f0100u: goto label_2f0100;
        case 0x2f0104u: goto label_2f0104;
        case 0x2f0108u: goto label_2f0108;
        case 0x2f010cu: goto label_2f010c;
        case 0x2f0110u: goto label_2f0110;
        case 0x2f0114u: goto label_2f0114;
        case 0x2f0118u: goto label_2f0118;
        case 0x2f011cu: goto label_2f011c;
        case 0x2f0120u: goto label_2f0120;
        case 0x2f0124u: goto label_2f0124;
        case 0x2f0128u: goto label_2f0128;
        case 0x2f012cu: goto label_2f012c;
        case 0x2f0130u: goto label_2f0130;
        case 0x2f0134u: goto label_2f0134;
        case 0x2f0138u: goto label_2f0138;
        case 0x2f013cu: goto label_2f013c;
        case 0x2f0140u: goto label_2f0140;
        case 0x2f0144u: goto label_2f0144;
        case 0x2f0148u: goto label_2f0148;
        case 0x2f014cu: goto label_2f014c;
        case 0x2f0150u: goto label_2f0150;
        case 0x2f0154u: goto label_2f0154;
        case 0x2f0158u: goto label_2f0158;
        case 0x2f015cu: goto label_2f015c;
        case 0x2f0160u: goto label_2f0160;
        case 0x2f0164u: goto label_2f0164;
        case 0x2f0168u: goto label_2f0168;
        case 0x2f016cu: goto label_2f016c;
        case 0x2f0170u: goto label_2f0170;
        case 0x2f0174u: goto label_2f0174;
        case 0x2f0178u: goto label_2f0178;
        case 0x2f017cu: goto label_2f017c;
        case 0x2f0180u: goto label_2f0180;
        case 0x2f0184u: goto label_2f0184;
        case 0x2f0188u: goto label_2f0188;
        case 0x2f018cu: goto label_2f018c;
        case 0x2f0190u: goto label_2f0190;
        case 0x2f0194u: goto label_2f0194;
        case 0x2f0198u: goto label_2f0198;
        case 0x2f019cu: goto label_2f019c;
        case 0x2f01a0u: goto label_2f01a0;
        case 0x2f01a4u: goto label_2f01a4;
        case 0x2f01a8u: goto label_2f01a8;
        case 0x2f01acu: goto label_2f01ac;
        case 0x2f01b0u: goto label_2f01b0;
        case 0x2f01b4u: goto label_2f01b4;
        case 0x2f01b8u: goto label_2f01b8;
        case 0x2f01bcu: goto label_2f01bc;
        case 0x2f01c0u: goto label_2f01c0;
        case 0x2f01c4u: goto label_2f01c4;
        case 0x2f01c8u: goto label_2f01c8;
        case 0x2f01ccu: goto label_2f01cc;
        case 0x2f01d0u: goto label_2f01d0;
        case 0x2f01d4u: goto label_2f01d4;
        case 0x2f01d8u: goto label_2f01d8;
        case 0x2f01dcu: goto label_2f01dc;
        case 0x2f01e0u: goto label_2f01e0;
        case 0x2f01e4u: goto label_2f01e4;
        case 0x2f01e8u: goto label_2f01e8;
        case 0x2f01ecu: goto label_2f01ec;
        case 0x2f01f0u: goto label_2f01f0;
        case 0x2f01f4u: goto label_2f01f4;
        case 0x2f01f8u: goto label_2f01f8;
        case 0x2f01fcu: goto label_2f01fc;
        case 0x2f0200u: goto label_2f0200;
        case 0x2f0204u: goto label_2f0204;
        case 0x2f0208u: goto label_2f0208;
        case 0x2f020cu: goto label_2f020c;
        case 0x2f0210u: goto label_2f0210;
        case 0x2f0214u: goto label_2f0214;
        case 0x2f0218u: goto label_2f0218;
        case 0x2f021cu: goto label_2f021c;
        case 0x2f0220u: goto label_2f0220;
        case 0x2f0224u: goto label_2f0224;
        case 0x2f0228u: goto label_2f0228;
        case 0x2f022cu: goto label_2f022c;
        case 0x2f0230u: goto label_2f0230;
        case 0x2f0234u: goto label_2f0234;
        case 0x2f0238u: goto label_2f0238;
        case 0x2f023cu: goto label_2f023c;
        case 0x2f0240u: goto label_2f0240;
        case 0x2f0244u: goto label_2f0244;
        case 0x2f0248u: goto label_2f0248;
        case 0x2f024cu: goto label_2f024c;
        case 0x2f0250u: goto label_2f0250;
        case 0x2f0254u: goto label_2f0254;
        case 0x2f0258u: goto label_2f0258;
        case 0x2f025cu: goto label_2f025c;
        case 0x2f0260u: goto label_2f0260;
        case 0x2f0264u: goto label_2f0264;
        case 0x2f0268u: goto label_2f0268;
        case 0x2f026cu: goto label_2f026c;
        case 0x2f0270u: goto label_2f0270;
        case 0x2f0274u: goto label_2f0274;
        case 0x2f0278u: goto label_2f0278;
        case 0x2f027cu: goto label_2f027c;
        case 0x2f0280u: goto label_2f0280;
        case 0x2f0284u: goto label_2f0284;
        case 0x2f0288u: goto label_2f0288;
        case 0x2f028cu: goto label_2f028c;
        case 0x2f0290u: goto label_2f0290;
        case 0x2f0294u: goto label_2f0294;
        case 0x2f0298u: goto label_2f0298;
        case 0x2f029cu: goto label_2f029c;
        case 0x2f02a0u: goto label_2f02a0;
        case 0x2f02a4u: goto label_2f02a4;
        case 0x2f02a8u: goto label_2f02a8;
        case 0x2f02acu: goto label_2f02ac;
        case 0x2f02b0u: goto label_2f02b0;
        case 0x2f02b4u: goto label_2f02b4;
        case 0x2f02b8u: goto label_2f02b8;
        case 0x2f02bcu: goto label_2f02bc;
        case 0x2f02c0u: goto label_2f02c0;
        case 0x2f02c4u: goto label_2f02c4;
        case 0x2f02c8u: goto label_2f02c8;
        case 0x2f02ccu: goto label_2f02cc;
        case 0x2f02d0u: goto label_2f02d0;
        case 0x2f02d4u: goto label_2f02d4;
        case 0x2f02d8u: goto label_2f02d8;
        case 0x2f02dcu: goto label_2f02dc;
        case 0x2f02e0u: goto label_2f02e0;
        case 0x2f02e4u: goto label_2f02e4;
        case 0x2f02e8u: goto label_2f02e8;
        case 0x2f02ecu: goto label_2f02ec;
        case 0x2f02f0u: goto label_2f02f0;
        case 0x2f02f4u: goto label_2f02f4;
        case 0x2f02f8u: goto label_2f02f8;
        case 0x2f02fcu: goto label_2f02fc;
        case 0x2f0300u: goto label_2f0300;
        case 0x2f0304u: goto label_2f0304;
        case 0x2f0308u: goto label_2f0308;
        case 0x2f030cu: goto label_2f030c;
        case 0x2f0310u: goto label_2f0310;
        case 0x2f0314u: goto label_2f0314;
        case 0x2f0318u: goto label_2f0318;
        case 0x2f031cu: goto label_2f031c;
        case 0x2f0320u: goto label_2f0320;
        case 0x2f0324u: goto label_2f0324;
        case 0x2f0328u: goto label_2f0328;
        case 0x2f032cu: goto label_2f032c;
        case 0x2f0330u: goto label_2f0330;
        case 0x2f0334u: goto label_2f0334;
        case 0x2f0338u: goto label_2f0338;
        case 0x2f033cu: goto label_2f033c;
        case 0x2f0340u: goto label_2f0340;
        case 0x2f0344u: goto label_2f0344;
        case 0x2f0348u: goto label_2f0348;
        case 0x2f034cu: goto label_2f034c;
        case 0x2f0350u: goto label_2f0350;
        case 0x2f0354u: goto label_2f0354;
        case 0x2f0358u: goto label_2f0358;
        case 0x2f035cu: goto label_2f035c;
        case 0x2f0360u: goto label_2f0360;
        case 0x2f0364u: goto label_2f0364;
        case 0x2f0368u: goto label_2f0368;
        case 0x2f036cu: goto label_2f036c;
        case 0x2f0370u: goto label_2f0370;
        case 0x2f0374u: goto label_2f0374;
        case 0x2f0378u: goto label_2f0378;
        case 0x2f037cu: goto label_2f037c;
        case 0x2f0380u: goto label_2f0380;
        case 0x2f0384u: goto label_2f0384;
        case 0x2f0388u: goto label_2f0388;
        case 0x2f038cu: goto label_2f038c;
        case 0x2f0390u: goto label_2f0390;
        case 0x2f0394u: goto label_2f0394;
        case 0x2f0398u: goto label_2f0398;
        case 0x2f039cu: goto label_2f039c;
        case 0x2f03a0u: goto label_2f03a0;
        case 0x2f03a4u: goto label_2f03a4;
        case 0x2f03a8u: goto label_2f03a8;
        case 0x2f03acu: goto label_2f03ac;
        case 0x2f03b0u: goto label_2f03b0;
        case 0x2f03b4u: goto label_2f03b4;
        case 0x2f03b8u: goto label_2f03b8;
        case 0x2f03bcu: goto label_2f03bc;
        case 0x2f03c0u: goto label_2f03c0;
        case 0x2f03c4u: goto label_2f03c4;
        case 0x2f03c8u: goto label_2f03c8;
        case 0x2f03ccu: goto label_2f03cc;
        case 0x2f03d0u: goto label_2f03d0;
        case 0x2f03d4u: goto label_2f03d4;
        case 0x2f03d8u: goto label_2f03d8;
        case 0x2f03dcu: goto label_2f03dc;
        case 0x2f03e0u: goto label_2f03e0;
        case 0x2f03e4u: goto label_2f03e4;
        case 0x2f03e8u: goto label_2f03e8;
        case 0x2f03ecu: goto label_2f03ec;
        case 0x2f03f0u: goto label_2f03f0;
        case 0x2f03f4u: goto label_2f03f4;
        case 0x2f03f8u: goto label_2f03f8;
        case 0x2f03fcu: goto label_2f03fc;
        case 0x2f0400u: goto label_2f0400;
        case 0x2f0404u: goto label_2f0404;
        case 0x2f0408u: goto label_2f0408;
        case 0x2f040cu: goto label_2f040c;
        case 0x2f0410u: goto label_2f0410;
        case 0x2f0414u: goto label_2f0414;
        case 0x2f0418u: goto label_2f0418;
        case 0x2f041cu: goto label_2f041c;
        case 0x2f0420u: goto label_2f0420;
        case 0x2f0424u: goto label_2f0424;
        case 0x2f0428u: goto label_2f0428;
        case 0x2f042cu: goto label_2f042c;
        case 0x2f0430u: goto label_2f0430;
        case 0x2f0434u: goto label_2f0434;
        case 0x2f0438u: goto label_2f0438;
        case 0x2f043cu: goto label_2f043c;
        case 0x2f0440u: goto label_2f0440;
        case 0x2f0444u: goto label_2f0444;
        case 0x2f0448u: goto label_2f0448;
        case 0x2f044cu: goto label_2f044c;
        case 0x2f0450u: goto label_2f0450;
        case 0x2f0454u: goto label_2f0454;
        case 0x2f0458u: goto label_2f0458;
        case 0x2f045cu: goto label_2f045c;
        case 0x2f0460u: goto label_2f0460;
        case 0x2f0464u: goto label_2f0464;
        case 0x2f0468u: goto label_2f0468;
        case 0x2f046cu: goto label_2f046c;
        case 0x2f0470u: goto label_2f0470;
        case 0x2f0474u: goto label_2f0474;
        case 0x2f0478u: goto label_2f0478;
        case 0x2f047cu: goto label_2f047c;
        default: break;
    }

    ctx->pc = 0x2f00c8u;

label_2f00c8:
    // 0x2f00c8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2f00c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2f00cc:
    // 0x2f00cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f00ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f00d0:
    // 0x2f00d0: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x2f00d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
label_2f00d4:
    // 0x2f00d4: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x2f00d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
label_2f00d8:
    // 0x2f00d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f00d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f00dc:
    // 0x2f00dc: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x2f00dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
label_2f00e0:
    // 0x2f00e0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2f00e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f00e4:
    // 0x2f00e4: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2f00e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
label_2f00e8:
    // 0x2f00e8: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x2f00e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
label_2f00ec:
    // 0x2f00ec: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x2f00ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
label_2f00f0:
    // 0x2f00f0: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x2f00f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
label_2f00f4:
    // 0x2f00f4: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x2f00f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
label_2f00f8:
    // 0x2f00f8: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x2f00f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_2f00fc:
    // 0x2f00fc: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2f00fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_2f0100:
    // 0x2f0100: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2f0100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2f0104:
    // 0x2f0104: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x2f0104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_2f0108:
    // 0x2f0108: 0x40f809  jalr        $v0
label_2f010c:
    if (ctx->pc == 0x2F010Cu) {
        ctx->pc = 0x2F010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0108u;
        // 0x2f010c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0110u;
        goto label_2f0110;
    }
    ctx->pc = 0x2F0108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F0110u);
        ctx->pc = 0x2F010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0108u;
        // 0x2f010c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0108u, 0x2F0110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0110u;
label_2f0110:
    // 0x2f0110: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
label_2f0114:
    if (ctx->pc == 0x2F0114u) {
        ctx->pc = 0x2F0114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0110u;
        // 0x2f0114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0118u;
        goto label_2f0118;
    }
    ctx->pc = 0x2F0110u;
    {
        const bool branch_taken_0x2f0110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0110u;
        // 0x2f0114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0110) {
            ctx->pc = 0x2F044Cu;
            goto label_2f044c;
        }
    }
    ctx->pc = 0x2F0118u;
label_2f0118:
    // 0x2f0118: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x2f0118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2f011c:
    // 0x2f011c: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x2f011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_2f0120:
    // 0x2f0120: 0x144000ca  bnez        $v0, . + 4 + (0xCA << 2)
label_2f0124:
    if (ctx->pc == 0x2F0124u) {
        ctx->pc = 0x2F0124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0120u;
        // 0x2f0124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0128u;
        goto label_2f0128;
    }
    ctx->pc = 0x2F0120u;
    {
        const bool branch_taken_0x2f0120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0120u;
        // 0x2f0124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0120) {
            ctx->pc = 0x2F044Cu;
            goto label_2f044c;
        }
    }
    ctx->pc = 0x2F0128u;
label_2f0128:
    // 0x2f0128: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2f0128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2f012c:
    // 0x2f012c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2f012cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2f0130:
    // 0x2f0130: 0x106200c5  beq         $v1, $v0, . + 4 + (0xC5 << 2)
label_2f0134:
    if (ctx->pc == 0x2F0134u) {
        ctx->pc = 0x2F0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0130u;
        // 0x2f0134: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0138u;
        goto label_2f0138;
    }
    ctx->pc = 0x2F0130u;
    {
        const bool branch_taken_0x2f0130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0130u;
        // 0x2f0134: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0130) {
            ctx->pc = 0x2F0448u;
            goto label_2f0448;
        }
    }
    ctx->pc = 0x2F0138u;
label_2f0138:
    // 0x2f0138: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2f0138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_2f013c:
    // 0x2f013c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2f013cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2f0140:
    // 0x2f0140: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f0140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f0144:
    // 0x2f0144: 0x24543d20  addiu       $s4, $v0, 0x3D20
    ctx->pc = 0x2f0144u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
label_2f0148:
    // 0x2f0148: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2f0148u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f014c:
    // 0x2f014c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2f014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2f0150:
    // 0x2f0150: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x2f0150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2f0154:
    // 0x2f0154: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x2f0154u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f0158:
    // 0x2f0158: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x2f0158u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f015c:
    // 0x2f015c: 0x100000af  b           . + 4 + (0xAF << 2)
label_2f0160:
    if (ctx->pc == 0x2F0160u) {
        ctx->pc = 0x2F0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F015Cu;
        // 0x2f0160: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0164u;
        goto label_2f0164;
    }
    ctx->pc = 0x2F015Cu;
    {
        const bool branch_taken_0x2f015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F015Cu;
        // 0x2f0160: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f015c) {
            ctx->pc = 0x2F041Cu;
            goto label_2f041c;
        }
    }
    ctx->pc = 0x2F0164u;
label_2f0164:
    // 0x2f0164: 0x0  nop
    ctx->pc = 0x2f0164u;
    // NOP
label_2f0168:
    // 0x2f0168: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2f0168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2f016c:
    // 0x2f016c: 0x504000ac  beql        $v0, $zero, . + 4 + (0xAC << 2)
label_2f0170:
    if (ctx->pc == 0x2F0170u) {
        ctx->pc = 0x2F0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F016Cu;
        // 0x2f0170: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0174u;
        goto label_2f0174;
    }
    ctx->pc = 0x2F016Cu;
    {
        const bool branch_taken_0x2f016c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f016c) {
            ctx->pc = 0x2F0170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F016Cu;
            // 0x2f0170: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0420u;
            goto label_2f0420;
        }
    }
    ctx->pc = 0x2F0174u;
label_2f0174:
    // 0x2f0174: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x2f0174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2f0178:
    // 0x2f0178: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2f0178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2f017c:
    // 0x2f017c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f017cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f0180:
    // 0x2f0180: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f0180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0184:
    // 0x2f0184: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f0184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f0188:
    // 0x2f0188: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f0188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f018c:
    // 0x2f018c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f018cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f0190:
    // 0x2f0190: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f0190u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0194:
    // 0x2f0194: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f0194u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0198:
    // 0x2f0198: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f0198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f019c:
    // 0x2f019c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f019cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f01a0:
    // 0x2f01a0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2f01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f01a4:
    // 0x2f01a4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f01a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f01a8:
    // 0x2f01a8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2f01a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f01ac:
    // 0x2f01ac: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x2f01acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2f01b0:
    // 0x2f01b0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f01b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f01b4:
    // 0x2f01b4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f01b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2f01b8:
    // 0x2f01b8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2f01b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f01bc:
    // 0x2f01bc: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x2f01bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2f01c0:
    // 0x2f01c0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2f01c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f01c4:
    // 0x2f01c4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2f01c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f01c8:
    // 0x2f01c8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2f01c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f01cc:
    // 0x2f01cc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f01ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f01d0:
    // 0x2f01d0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f01d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f01d4:
    // 0x2f01d4: 0x4604219c  madd.s      $f6, $f4, $f4
    ctx->pc = 0x2f01d4u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f01d8:
    // 0x2f01d8: 0x46060184  c1          0x60184
    ctx->pc = 0x2f01d8u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
label_2f01dc:
    // 0x2f01dc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2f01dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2f01e0:
    // 0x2f01e0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f01e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f01e4:
    // 0x2f01e4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f01e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f01e8:
    // 0x2f01e8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f01e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f01ec:
    // 0x2f01ec: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f01ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f01f0:
    // 0x2f01f0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f01f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f01f4:
    // 0x2f01f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f01f4u;
    // VWAITQ (Q already resolved in this runtime)
label_2f01f8:
    // 0x2f01f8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f01f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f01fc:
    // 0x2f01fc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f01fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0200:
    // 0x2f0200: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f0204:
    // 0x2f0204: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2f0204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2f0208:
    // 0x2f0208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f0208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f020c:
    // 0x2f020c: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x2f020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0210:
    // 0x2f0210: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2f0210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2f0214:
    // 0x2f0214: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2f0214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0218:
    // 0x2f0218: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2f0218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f021c:
    // 0x2f021c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0220:
    // 0x2f0220: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2f0220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f0224:
    // 0x2f0224: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f0224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0228:
    // 0x2f0228: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2f0228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f022c:
    // 0x2f022c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0230:
    // 0x2f0230: 0x4500007a  bc1f        . + 4 + (0x7A << 2)
label_2f0234:
    if (ctx->pc == 0x2F0234u) {
        ctx->pc = 0x2F0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0230u;
        // 0x2f0234: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0238u;
        goto label_2f0238;
    }
    ctx->pc = 0x2F0230u;
    {
        const bool branch_taken_0x2f0230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0230u;
        // 0x2f0234: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0230) {
            ctx->pc = 0x2F041Cu;
            goto label_2f041c;
        }
    }
    ctx->pc = 0x2F0238u;
label_2f0238:
    // 0x2f0238: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2f0238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f023c:
    // 0x2f023c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2f023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0240:
    // 0x2f0240: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f0240u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f0244:
    // 0x2f0244: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2f0244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0248:
    // 0x2f0248: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2f0248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f024c:
    // 0x2f024c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f024cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2f0250:
    // 0x2f0250: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2f0250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0254:
    // 0x2f0254: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2f0254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0258:
    // 0x2f0258: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2f0258u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f025c:
    // 0x2f025c: 0x3c01bf0c  lui         $at, 0xBF0C
    ctx->pc = 0x2f025cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48908 << 16));
label_2f0260:
    // 0x2f0260: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f0260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f0264:
    // 0x2f0264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f0264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0268:
    // 0x2f0268: 0x0  nop
    ctx->pc = 0x2f0268u;
    // NOP
label_2f026c:
    // 0x2f026c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f026cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0270:
    // 0x2f0270: 0x0  nop
    ctx->pc = 0x2f0270u;
    // NOP
label_2f0274:
    // 0x2f0274: 0x4502006a  bc1fl       . + 4 + (0x6A << 2)
label_2f0278:
    if (ctx->pc == 0x2F0278u) {
        ctx->pc = 0x2F0278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0274u;
        // 0x2f0278: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F027Cu;
        goto label_2f027c;
    }
    ctx->pc = 0x2F0274u;
    {
        const bool branch_taken_0x2f0274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0274) {
            ctx->pc = 0x2F0278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0274u;
            // 0x2f0278: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0420u;
            goto label_2f0420;
        }
    }
    ctx->pc = 0x2F027Cu;
label_2f027c:
    // 0x2f027c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f0280:
    // 0x2f0280: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2f0280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_2f0284:
    // 0x2f0284: 0xe6740004  swc1        $f20, 0x4($s3)
    ctx->pc = 0x2f0284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_2f0288:
    // 0x2f0288: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f0288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f028c:
    // 0x2f028c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2f028cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_2f0290:
    // 0x2f0290: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2f0290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_2f0294:
    // 0x2f0294: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f0294u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0298:
    // 0x2f0298: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x2f0298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f029c:
    // 0x2f029c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f029cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f02a0:
    // 0x2f02a0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2f02a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f02a4:
    // 0x2f02a4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2f02a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f02a8:
    // 0x2f02a8: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2f02a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f02ac:
    // 0x2f02ac: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x2f02acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f02b0:
    // 0x2f02b0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2f02b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f02b4:
    // 0x2f02b4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2f02b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2f02b8:
    // 0x2f02b8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2f02b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2f02bc:
    // 0x2f02bc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2f02bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2f02c0:
    // 0x2f02c0: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x2f02c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2f02c4:
    // 0x2f02c4: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2f02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2f02c8:
    // 0x2f02c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f02c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f02cc:
    // 0x2f02cc: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2f02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_2f02d0:
    // 0x2f02d0: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x2f02d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2f02d4:
    // 0x2f02d4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f02d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f02d8:
    // 0x2f02d8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2f02d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_2f02dc:
    // 0x2f02dc: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2f02dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_2f02e0:
    // 0x2f02e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f02e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f02e4:
    // 0x2f02e4: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2f02e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2f02e8:
    // 0x2f02e8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f02e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f02ec:
    // 0x2f02ec: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2f02ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f02f0:
    // 0x2f02f0: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x2f02f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f02f4:
    // 0x2f02f4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2f02f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f02f8:
    // 0x2f02f8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2f02f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f02fc:
    // 0x2f02fc: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2f02fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0300:
    // 0x2f0300: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x2f0300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0304:
    // 0x2f0304: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2f0304u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2f0308:
    // 0x2f0308: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2f0308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2f030c:
    // 0x2f030c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2f030cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2f0310:
    // 0x2f0310: 0xc0f6a96  jal         func_3DAA58
label_2f0314:
    if (ctx->pc == 0x2F0314u) {
        ctx->pc = 0x2F0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0310u;
        // 0x2f0314: 0xe7a2003c  swc1        $f2, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0318u;
        goto label_2f0318;
    }
    ctx->pc = 0x2F0310u;
    SET_GPR_U32(ctx, 31, 0x2F0318u);
    ctx->pc = 0x2F0314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0310u;
    // 0x2f0314: 0xe7a2003c  swc1        $f2, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F0310u, 0x2F0318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0318u;
label_2f0318:
    // 0x2f0318: 0xc0f6a96  jal         func_3DAA58
label_2f031c:
    if (ctx->pc == 0x2F031Cu) {
        ctx->pc = 0x2F031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0318u;
        // 0x2f031c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0320u;
        goto label_2f0320;
    }
    ctx->pc = 0x2F0318u;
    SET_GPR_U32(ctx, 31, 0x2F0320u);
    ctx->pc = 0x2F031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0318u;
    // 0x2f031c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F0318u, 0x2F0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0320u;
label_2f0320:
    // 0x2f0320: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2f0320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0324:
    // 0x2f0324: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2f0324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f0328:
    // 0x2f0328: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2f0328u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f032c:
    // 0x2f032c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2f032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2f0330:
    // 0x2f0330: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x2f0330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_2f0334:
    // 0x2f0334: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2f0334u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2f0338:
    // 0x2f0338: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x2f0338u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2f033c:
    // 0x2f033c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f033cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0340:
    // 0x2f0340: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2f0340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0344:
    // 0x2f0344: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2f0344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0348:
    // 0x2f0348: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2f0348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f034c:
    // 0x2f034c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2f034cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f0350:
    // 0x2f0350: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f0350u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f0354:
    // 0x2f0354: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f0354u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f0358:
    // 0x2f0358: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2f0358u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f035c:
    // 0x2f035c: 0x0  nop
    ctx->pc = 0x2f035cu;
    // NOP
label_2f0360:
    // 0x2f0360: 0x0  nop
    ctx->pc = 0x2f0360u;
    // NOP
label_2f0364:
    // 0x2f0364: 0x46010084  c1          0x10084
    ctx->pc = 0x2f0364u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_2f0368:
    // 0x2f0368: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x2f0368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2f036c:
    // 0x2f036c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f036cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0370:
    // 0x2f0370: 0x0  nop
    ctx->pc = 0x2f0370u;
    // NOP
label_2f0374:
    // 0x2f0374: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f0374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0378:
    // 0x2f0378: 0x0  nop
    ctx->pc = 0x2f0378u;
    // NOP
label_2f037c:
    // 0x2f037c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2f0380:
    if (ctx->pc == 0x2F0380u) {
        ctx->pc = 0x2F0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F037Cu;
        // 0x2f0380: 0xe7a200b0  swc1        $f2, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0384u;
        goto label_2f0384;
    }
    ctx->pc = 0x2F037Cu;
    {
        const bool branch_taken_0x2f037c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F037Cu;
        // 0x2f0380: 0xe7a200b0  swc1        $f2, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f037c) {
            ctx->pc = 0x2F03A8u;
            goto label_2f03a8;
        }
    }
    ctx->pc = 0x2F0384u;
label_2f0384:
    // 0x2f0384: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f0384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f0388:
    // 0x2f0388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f0388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f038c:
    // 0x2f038c: 0x0  nop
    ctx->pc = 0x2f038cu;
    // NOP
label_2f0390:
    // 0x2f0390: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f0390u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_2f0394:
    // 0x2f0394: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f0394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f0398:
    // 0x2f0398: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f0398u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f039c:
    // 0x2f039c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f039cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f03a0:
    // 0x2f03a0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f03a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f03a4:
    // 0x2f03a4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2f03a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f03a8:
    // 0x2f03a8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f03a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2f03ac:
    // 0x2f03ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f03acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f03b0:
    // 0x2f03b0: 0xc07788a  jal         func_1DE228
label_2f03b4:
    if (ctx->pc == 0x2F03B4u) {
        ctx->pc = 0x2F03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03B0u;
        // 0x2f03b4: 0x34a5fffe  ori         $a1, $a1, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03B8u;
        goto label_2f03b8;
    }
    ctx->pc = 0x2F03B0u;
    SET_GPR_U32(ctx, 31, 0x2F03B8u);
    ctx->pc = 0x2F03B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03B0u;
    // 0x2f03b4: 0x34a5fffe  ori         $a1, $a1, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x2F03B0u, 0x2F03B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03B8u;
label_2f03b8:
    // 0x2f03b8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_2f03bc:
    if (ctx->pc == 0x2F03BCu) {
        ctx->pc = 0x2F03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03B8u;
        // 0x2f03bc: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03C0u;
        goto label_2f03c0;
    }
    ctx->pc = 0x2F03B8u;
    {
        const bool branch_taken_0x2f03b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f03b8) {
            ctx->pc = 0x2F03BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F03B8u;
            // 0x2f03bc: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0420u;
            goto label_2f0420;
        }
    }
    ctx->pc = 0x2F03C0u;
label_2f03c0:
    // 0x2f03c0: 0x52e00014  beql        $s7, $zero, . + 4 + (0x14 << 2)
label_2f03c4:
    if (ctx->pc == 0x2F03C4u) {
        ctx->pc = 0x2F03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03C0u;
        // 0x2f03c4: 0xae111200  sw          $s1, 0x1200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4608), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03C8u;
        goto label_2f03c8;
    }
    ctx->pc = 0x2F03C0u;
    {
        const bool branch_taken_0x2f03c0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f03c0) {
            ctx->pc = 0x2F03C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F03C0u;
            // 0x2f03c4: 0xae111200  sw          $s1, 0x1200($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4608), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0414u;
            goto label_2f0414;
        }
    }
    ctx->pc = 0x2F03C8u;
label_2f03c8:
    // 0x2f03c8: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2f03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2f03cc:
    // 0x2f03cc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2f03ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2f03d0:
    // 0x2f03d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f03d4:
    if (ctx->pc == 0x2F03D4u) {
        ctx->pc = 0x2F03D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03D0u;
        // 0x2f03d4: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03D8u;
        goto label_2f03d8;
    }
    ctx->pc = 0x2F03D0u;
    {
        const bool branch_taken_0x2f03d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03D0u;
        // 0x2f03d4: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03d0) {
            ctx->pc = 0x2F03E8u;
            goto label_2f03e8;
        }
    }
    ctx->pc = 0x2F03D8u;
label_2f03d8:
    // 0x2f03d8: 0xc06bf48  jal         func_1AFD20
label_2f03dc:
    if (ctx->pc == 0x2F03DCu) {
        ctx->pc = 0x2F03DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03D8u;
        // 0x2f03dc: 0x24050192  addiu       $a1, $zero, 0x192 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 402));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03E0u;
        goto label_2f03e0;
    }
    ctx->pc = 0x2F03D8u;
    SET_GPR_U32(ctx, 31, 0x2F03E0u);
    ctx->pc = 0x2F03DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03D8u;
    // 0x2f03dc: 0x24050192  addiu       $a1, $zero, 0x192 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 402));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD20u, 0x2F03D8u, 0x2F03E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03E0u;
label_2f03e0:
    // 0x2f03e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2f03e4:
    if (ctx->pc == 0x2F03E4u) {
        ctx->pc = 0x2F03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03E0u;
        // 0x2f03e4: 0x8e030338  lw          $v1, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03E8u;
        goto label_2f03e8;
    }
    ctx->pc = 0x2F03E0u;
    {
        const bool branch_taken_0x2f03e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03E0u;
        // 0x2f03e4: 0x8e030338  lw          $v1, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03e0) {
            ctx->pc = 0x2F03F4u;
            goto label_2f03f4;
        }
    }
    ctx->pc = 0x2F03E8u;
label_2f03e8:
    // 0x2f03e8: 0xc06bf48  jal         func_1AFD20
label_2f03ec:
    if (ctx->pc == 0x2F03ECu) {
        ctx->pc = 0x2F03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03E8u;
        // 0x2f03ec: 0x24050191  addiu       $a1, $zero, 0x191 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 401));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03F0u;
        goto label_2f03f0;
    }
    ctx->pc = 0x2F03E8u;
    SET_GPR_U32(ctx, 31, 0x2F03F0u);
    ctx->pc = 0x2F03ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03E8u;
    // 0x2f03ec: 0x24050191  addiu       $a1, $zero, 0x191 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 401));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD20u, 0x2F03E8u, 0x2F03F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03F0u;
label_2f03f0:
    // 0x2f03f0: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x2f03f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2f03f4:
    // 0x2f03f4: 0x8c640084  lw          $a0, 0x84($v1)
    ctx->pc = 0x2f03f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2f03f8:
    // 0x2f03f8: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2f03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2f03fc:
    // 0x2f03fc: 0x54820001  bnel        $a0, $v0, . + 4 + (0x1 << 2)
label_2f0400:
    if (ctx->pc == 0x2F0400u) {
        ctx->pc = 0x2F0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03FCu;
        // 0x2f0400: 0xac640094  sw          $a0, 0x94($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0404u;
        goto label_2f0404;
    }
    ctx->pc = 0x2F03FCu;
    {
        const bool branch_taken_0x2f03fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f03fc) {
            ctx->pc = 0x2F0400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F03FCu;
            // 0x2f0400: 0xac640094  sw          $a0, 0x94($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0404u;
            goto label_2f0404;
        }
    }
    ctx->pc = 0x2F0404u;
label_2f0404:
    // 0x2f0404: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2f0404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2f0408:
    // 0x2f0408: 0xc06c546  jal         func_1B1518
label_2f040c:
    if (ctx->pc == 0x2F040Cu) {
        ctx->pc = 0x2F040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0408u;
        // 0x2f040c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0410u;
        goto label_2f0410;
    }
    ctx->pc = 0x2F0408u;
    SET_GPR_U32(ctx, 31, 0x2F0410u);
    ctx->pc = 0x2F040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0408u;
    // 0x2f040c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x2F0408u, 0x2F0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0410u;
label_2f0410:
    // 0x2f0410: 0xae111200  sw          $s1, 0x1200($s0)
    ctx->pc = 0x2f0410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4608), GPR_U32(ctx, 17));
label_2f0414:
    // 0x2f0414: 0x1000000d  b           . + 4 + (0xD << 2)
label_2f0418:
    if (ctx->pc == 0x2F0418u) {
        ctx->pc = 0x2F0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0414u;
        // 0x2f0418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F041Cu;
        goto label_2f041c;
    }
    ctx->pc = 0x2F0414u;
    {
        const bool branch_taken_0x2f0414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0414u;
        // 0x2f0418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0414) {
            ctx->pc = 0x2F044Cu;
            goto label_2f044c;
        }
    }
    ctx->pc = 0x2F041Cu;
label_2f041c:
    // 0x2f041c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2f041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2f0420:
    // 0x2f0420: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f0420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0424:
    // 0x2f0424: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f0428:
    if (ctx->pc == 0x2F0428u) {
        ctx->pc = 0x2F0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0424u;
        // 0x2f0428: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F042Cu;
        goto label_2f042c;
    }
    ctx->pc = 0x2F0424u;
    {
        const bool branch_taken_0x2f0424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0424u;
        // 0x2f0428: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0424) {
            ctx->pc = 0x2F0430u;
            goto label_2f0430;
        }
    }
    ctx->pc = 0x2F042Cu;
label_2f042c:
    // 0x2f042c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2f042cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0430:
    // 0x2f0430: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2f0434:
    if (ctx->pc == 0x2F0434u) {
        ctx->pc = 0x2F0438u;
        goto label_2f0438;
    }
    ctx->pc = 0x2F0430u;
    {
        const bool branch_taken_0x2f0430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0430) {
            ctx->pc = 0x2F0440u;
            goto label_2f0440;
        }
    }
    ctx->pc = 0x2F0438u;
label_2f0438:
    // 0x2f0438: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2f0438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2f043c:
    // 0x2f043c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x2f043cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_2f0440:
    // 0x2f0440: 0x5620ff49  bnel        $s1, $zero, . + 4 + (-0xB7 << 2)
label_2f0444:
    if (ctx->pc == 0x2F0444u) {
        ctx->pc = 0x2F0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0440u;
        // 0x2f0444: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0448u;
        goto label_2f0448;
    }
    ctx->pc = 0x2F0440u;
    {
        const bool branch_taken_0x2f0440 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0440) {
            ctx->pc = 0x2F0444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0440u;
            // 0x2f0444: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f0168;
        }
    }
    ctx->pc = 0x2F0448u;
label_2f0448:
    // 0x2f0448: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f044c:
    // 0x2f044c: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x2f044cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2f0450:
    // 0x2f0450: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x2f0450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_2f0454:
    // 0x2f0454: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x2f0454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2f0458:
    // 0x2f0458: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x2f0458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_2f045c:
    // 0x2f045c: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x2f045cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2f0460:
    // 0x2f0460: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x2f0460u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_2f0464:
    // 0x2f0464: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x2f0464u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2f0468:
    // 0x2f0468: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x2f0468u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_2f046c:
    // 0x2f046c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2f046cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2f0470:
    // 0x2f0470: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2f0470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f0474:
    // 0x2f0474: 0x3e00008  jr          $ra
label_2f0478:
    if (ctx->pc == 0x2F0478u) {
        ctx->pc = 0x2F0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0474u;
        // 0x2f0478: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F047Cu;
        goto label_2f047c;
    }
    ctx->pc = 0x2F0474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0474u;
        // 0x2f0478: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F047Cu;
label_2f047c:
    // 0x2f047c: 0x0  nop
    ctx->pc = 0x2f047cu;
    // NOP
    ctx->pc = 0x2f0480u;
}
