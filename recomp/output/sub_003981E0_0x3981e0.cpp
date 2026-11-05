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

// Function: sub_003981E0
// Address: 0x3981e0 - 0x3984e8
void sub_003981E0_0x3981e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003981E0_0x3981e0");
#endif

    switch (ctx->pc) {
        case 0x3981e0u: goto label_3981e0;
        case 0x3981e4u: goto label_3981e4;
        case 0x3981e8u: goto label_3981e8;
        case 0x3981ecu: goto label_3981ec;
        case 0x3981f0u: goto label_3981f0;
        case 0x3981f4u: goto label_3981f4;
        case 0x3981f8u: goto label_3981f8;
        case 0x3981fcu: goto label_3981fc;
        case 0x398200u: goto label_398200;
        case 0x398204u: goto label_398204;
        case 0x398208u: goto label_398208;
        case 0x39820cu: goto label_39820c;
        case 0x398210u: goto label_398210;
        case 0x398214u: goto label_398214;
        case 0x398218u: goto label_398218;
        case 0x39821cu: goto label_39821c;
        case 0x398220u: goto label_398220;
        case 0x398224u: goto label_398224;
        case 0x398228u: goto label_398228;
        case 0x39822cu: goto label_39822c;
        case 0x398230u: goto label_398230;
        case 0x398234u: goto label_398234;
        case 0x398238u: goto label_398238;
        case 0x39823cu: goto label_39823c;
        case 0x398240u: goto label_398240;
        case 0x398244u: goto label_398244;
        case 0x398248u: goto label_398248;
        case 0x39824cu: goto label_39824c;
        case 0x398250u: goto label_398250;
        case 0x398254u: goto label_398254;
        case 0x398258u: goto label_398258;
        case 0x39825cu: goto label_39825c;
        case 0x398260u: goto label_398260;
        case 0x398264u: goto label_398264;
        case 0x398268u: goto label_398268;
        case 0x39826cu: goto label_39826c;
        case 0x398270u: goto label_398270;
        case 0x398274u: goto label_398274;
        case 0x398278u: goto label_398278;
        case 0x39827cu: goto label_39827c;
        case 0x398280u: goto label_398280;
        case 0x398284u: goto label_398284;
        case 0x398288u: goto label_398288;
        case 0x39828cu: goto label_39828c;
        case 0x398290u: goto label_398290;
        case 0x398294u: goto label_398294;
        case 0x398298u: goto label_398298;
        case 0x39829cu: goto label_39829c;
        case 0x3982a0u: goto label_3982a0;
        case 0x3982a4u: goto label_3982a4;
        case 0x3982a8u: goto label_3982a8;
        case 0x3982acu: goto label_3982ac;
        case 0x3982b0u: goto label_3982b0;
        case 0x3982b4u: goto label_3982b4;
        case 0x3982b8u: goto label_3982b8;
        case 0x3982bcu: goto label_3982bc;
        case 0x3982c0u: goto label_3982c0;
        case 0x3982c4u: goto label_3982c4;
        case 0x3982c8u: goto label_3982c8;
        case 0x3982ccu: goto label_3982cc;
        case 0x3982d0u: goto label_3982d0;
        case 0x3982d4u: goto label_3982d4;
        case 0x3982d8u: goto label_3982d8;
        case 0x3982dcu: goto label_3982dc;
        case 0x3982e0u: goto label_3982e0;
        case 0x3982e4u: goto label_3982e4;
        case 0x3982e8u: goto label_3982e8;
        case 0x3982ecu: goto label_3982ec;
        case 0x3982f0u: goto label_3982f0;
        case 0x3982f4u: goto label_3982f4;
        case 0x3982f8u: goto label_3982f8;
        case 0x3982fcu: goto label_3982fc;
        case 0x398300u: goto label_398300;
        case 0x398304u: goto label_398304;
        case 0x398308u: goto label_398308;
        case 0x39830cu: goto label_39830c;
        case 0x398310u: goto label_398310;
        case 0x398314u: goto label_398314;
        case 0x398318u: goto label_398318;
        case 0x39831cu: goto label_39831c;
        case 0x398320u: goto label_398320;
        case 0x398324u: goto label_398324;
        case 0x398328u: goto label_398328;
        case 0x39832cu: goto label_39832c;
        case 0x398330u: goto label_398330;
        case 0x398334u: goto label_398334;
        case 0x398338u: goto label_398338;
        case 0x39833cu: goto label_39833c;
        case 0x398340u: goto label_398340;
        case 0x398344u: goto label_398344;
        case 0x398348u: goto label_398348;
        case 0x39834cu: goto label_39834c;
        case 0x398350u: goto label_398350;
        case 0x398354u: goto label_398354;
        case 0x398358u: goto label_398358;
        case 0x39835cu: goto label_39835c;
        case 0x398360u: goto label_398360;
        case 0x398364u: goto label_398364;
        case 0x398368u: goto label_398368;
        case 0x39836cu: goto label_39836c;
        case 0x398370u: goto label_398370;
        case 0x398374u: goto label_398374;
        case 0x398378u: goto label_398378;
        case 0x39837cu: goto label_39837c;
        case 0x398380u: goto label_398380;
        case 0x398384u: goto label_398384;
        case 0x398388u: goto label_398388;
        case 0x39838cu: goto label_39838c;
        case 0x398390u: goto label_398390;
        case 0x398394u: goto label_398394;
        case 0x398398u: goto label_398398;
        case 0x39839cu: goto label_39839c;
        case 0x3983a0u: goto label_3983a0;
        case 0x3983a4u: goto label_3983a4;
        case 0x3983a8u: goto label_3983a8;
        case 0x3983acu: goto label_3983ac;
        case 0x3983b0u: goto label_3983b0;
        case 0x3983b4u: goto label_3983b4;
        case 0x3983b8u: goto label_3983b8;
        case 0x3983bcu: goto label_3983bc;
        case 0x3983c0u: goto label_3983c0;
        case 0x3983c4u: goto label_3983c4;
        case 0x3983c8u: goto label_3983c8;
        case 0x3983ccu: goto label_3983cc;
        case 0x3983d0u: goto label_3983d0;
        case 0x3983d4u: goto label_3983d4;
        case 0x3983d8u: goto label_3983d8;
        case 0x3983dcu: goto label_3983dc;
        case 0x3983e0u: goto label_3983e0;
        case 0x3983e4u: goto label_3983e4;
        case 0x3983e8u: goto label_3983e8;
        case 0x3983ecu: goto label_3983ec;
        case 0x3983f0u: goto label_3983f0;
        case 0x3983f4u: goto label_3983f4;
        case 0x3983f8u: goto label_3983f8;
        case 0x3983fcu: goto label_3983fc;
        case 0x398400u: goto label_398400;
        case 0x398404u: goto label_398404;
        case 0x398408u: goto label_398408;
        case 0x39840cu: goto label_39840c;
        case 0x398410u: goto label_398410;
        case 0x398414u: goto label_398414;
        case 0x398418u: goto label_398418;
        case 0x39841cu: goto label_39841c;
        case 0x398420u: goto label_398420;
        case 0x398424u: goto label_398424;
        case 0x398428u: goto label_398428;
        case 0x39842cu: goto label_39842c;
        case 0x398430u: goto label_398430;
        case 0x398434u: goto label_398434;
        case 0x398438u: goto label_398438;
        case 0x39843cu: goto label_39843c;
        case 0x398440u: goto label_398440;
        case 0x398444u: goto label_398444;
        case 0x398448u: goto label_398448;
        case 0x39844cu: goto label_39844c;
        case 0x398450u: goto label_398450;
        case 0x398454u: goto label_398454;
        case 0x398458u: goto label_398458;
        case 0x39845cu: goto label_39845c;
        case 0x398460u: goto label_398460;
        case 0x398464u: goto label_398464;
        case 0x398468u: goto label_398468;
        case 0x39846cu: goto label_39846c;
        case 0x398470u: goto label_398470;
        case 0x398474u: goto label_398474;
        case 0x398478u: goto label_398478;
        case 0x39847cu: goto label_39847c;
        case 0x398480u: goto label_398480;
        case 0x398484u: goto label_398484;
        case 0x398488u: goto label_398488;
        case 0x39848cu: goto label_39848c;
        case 0x398490u: goto label_398490;
        case 0x398494u: goto label_398494;
        case 0x398498u: goto label_398498;
        case 0x39849cu: goto label_39849c;
        case 0x3984a0u: goto label_3984a0;
        case 0x3984a4u: goto label_3984a4;
        case 0x3984a8u: goto label_3984a8;
        case 0x3984acu: goto label_3984ac;
        case 0x3984b0u: goto label_3984b0;
        case 0x3984b4u: goto label_3984b4;
        case 0x3984b8u: goto label_3984b8;
        case 0x3984bcu: goto label_3984bc;
        case 0x3984c0u: goto label_3984c0;
        case 0x3984c4u: goto label_3984c4;
        case 0x3984c8u: goto label_3984c8;
        case 0x3984ccu: goto label_3984cc;
        case 0x3984d0u: goto label_3984d0;
        case 0x3984d4u: goto label_3984d4;
        case 0x3984d8u: goto label_3984d8;
        case 0x3984dcu: goto label_3984dc;
        case 0x3984e0u: goto label_3984e0;
        case 0x3984e4u: goto label_3984e4;
        default: break;
    }

    ctx->pc = 0x3981e0u;

label_3981e0:
    // 0x3981e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3981e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3981e4:
    // 0x3981e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3981e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3981e8:
    // 0x3981e8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3981e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_3981ec:
    // 0x3981ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3981ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3981f0:
    // 0x3981f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3981f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3981f4:
    // 0x3981f4: 0x3406c800  ori         $a2, $zero, 0xC800
    ctx->pc = 0x3981f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51200);
label_3981f8:
    // 0x3981f8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3981f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_3981fc:
    // 0x3981fc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3981fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398200:
    // 0x398200: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x398200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_398204:
    // 0x398204: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x398204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_398208:
    // 0x398208: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x398208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_39820c:
    // 0x39820c: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x39820cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_398210:
    // 0x398210: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x398210u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_398214:
    // 0x398214: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x398214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398218:
    // 0x398218: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x398218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_39821c:
    // 0x39821c: 0x40f809  jalr        $v0
label_398220:
    if (ctx->pc == 0x398220u) {
        ctx->pc = 0x398220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39821Cu;
        // 0x398220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398224u;
        goto label_398224;
    }
    ctx->pc = 0x39821Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398224u);
        ctx->pc = 0x398220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39821Cu;
        // 0x398220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39821Cu, 0x398224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398224u;
label_398224:
    // 0x398224: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x398224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_398228:
    // 0x398228: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
label_39822c:
    if (ctx->pc == 0x39822Cu) {
        ctx->pc = 0x39822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398228u;
        // 0x39822c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398230u;
        goto label_398230;
    }
    ctx->pc = 0x398228u;
    {
        const bool branch_taken_0x398228 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x39822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398228u;
        // 0x39822c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398228) {
            ctx->pc = 0x398274u;
            goto label_398274;
        }
    }
    ctx->pc = 0x398230u;
label_398230:
    // 0x398230: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x398230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_398234:
    // 0x398234: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x398234u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_398238:
    // 0x398238: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_39823c:
    if (ctx->pc == 0x39823Cu) {
        ctx->pc = 0x39823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398238u;
        // 0x39823c: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398240u;
        goto label_398240;
    }
    ctx->pc = 0x398238u;
    {
        const bool branch_taken_0x398238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398238u;
        // 0x39823c: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398238) {
            ctx->pc = 0x398278u;
            goto label_398278;
        }
    }
    ctx->pc = 0x398240u;
label_398240:
    // 0x398240: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x398240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398244:
    // 0x398244: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x398244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_398248:
    // 0x398248: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x398248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_39824c:
    // 0x39824c: 0x0  nop
    ctx->pc = 0x39824cu;
    // NOP
label_398250:
    // 0x398250: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x398250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_398254:
    // 0x398254: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_398258:
    if (ctx->pc == 0x398258u) {
        ctx->pc = 0x398258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398254u;
        // 0x398258: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39825Cu;
        goto label_39825c;
    }
    ctx->pc = 0x398254u;
    {
        const bool branch_taken_0x398254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398254u;
        // 0x398258: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398254) {
            ctx->pc = 0x398274u;
            goto label_398274;
        }
    }
    ctx->pc = 0x39825Cu;
label_39825c:
    // 0x39825c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x39825cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_398260:
    // 0x398260: 0x0  nop
    ctx->pc = 0x398260u;
    // NOP
label_398264:
    // 0x398264: 0x0  nop
    ctx->pc = 0x398264u;
    // NOP
label_398268:
    // 0x398268: 0x0  nop
    ctx->pc = 0x398268u;
    // NOP
label_39826c:
    // 0x39826c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_398270:
    if (ctx->pc == 0x398270u) {
        ctx->pc = 0x398270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39826Cu;
        // 0x398270: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398274u;
        goto label_398274;
    }
    ctx->pc = 0x39826Cu;
    {
        const bool branch_taken_0x39826c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39826c) {
            ctx->pc = 0x398270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39826Cu;
            // 0x398270: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398250;
        }
    }
    ctx->pc = 0x398274u;
label_398274:
    // 0x398274: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x398274u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_398278:
    // 0x398278: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x398278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_39827c:
    // 0x39827c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x39827cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_398280:
    // 0x398280: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x398280u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_398284:
    // 0x398284: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x398284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_398288:
    // 0x398288: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_39828c:
    if (ctx->pc == 0x39828Cu) {
        ctx->pc = 0x39828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398288u;
        // 0x39828c: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398290u;
        goto label_398290;
    }
    ctx->pc = 0x398288u;
    {
        const bool branch_taken_0x398288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398288u;
        // 0x39828c: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398288) {
            ctx->pc = 0x3982D8u;
            goto label_3982d8;
        }
    }
    ctx->pc = 0x398290u;
label_398290:
    // 0x398290: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x398290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398294:
    // 0x398294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_398298:
    // 0x398298: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39829c:
    // 0x39829c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x39829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3982a0:
    // 0x3982a0: 0x40f809  jalr        $v0
label_3982a4:
    if (ctx->pc == 0x3982A4u) {
        ctx->pc = 0x3982A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982A0u;
        // 0x3982a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3982A8u;
        goto label_3982a8;
    }
    ctx->pc = 0x3982A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3982A8u);
        ctx->pc = 0x3982A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982A0u;
        // 0x3982a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3982A0u, 0x3982A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3982A8u;
label_3982a8:
    // 0x3982a8: 0xc0eb680  jal         func_3ADA00
label_3982ac:
    if (ctx->pc == 0x3982ACu) {
        ctx->pc = 0x3982B0u;
        goto label_3982b0;
    }
    ctx->pc = 0x3982A8u;
    SET_GPR_U32(ctx, 31, 0x3982B0u);
    ctx->pc = 0x3ADA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADA00u, 0x3982A8u, 0x3982B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3982B0u;
label_3982b0:
    // 0x3982b0: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
label_3982b4:
    if (ctx->pc == 0x3982B4u) {
        ctx->pc = 0x3982B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982B0u;
        // 0x3982b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3982B8u;
        goto label_3982b8;
    }
    ctx->pc = 0x3982B0u;
    {
        const bool branch_taken_0x3982b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3982b0) {
            ctx->pc = 0x3982B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3982B0u;
            // 0x3982b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3984C4u;
            goto label_3984c4;
        }
    }
    ctx->pc = 0x3982B8u;
label_3982b8:
    // 0x3982b8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3982b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3982bc:
    // 0x3982bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3982bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3982c0:
    // 0x3982c0: 0x2484b0e8  addiu       $a0, $a0, -0x4F18
    ctx->pc = 0x3982c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947048));
label_3982c4:
    // 0x3982c4: 0xc0ec11c  jal         func_3B0470
label_3982c8:
    if (ctx->pc == 0x3982C8u) {
        ctx->pc = 0x3982C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982C4u;
        // 0x3982c8: 0x24a5b108  addiu       $a1, $a1, -0x4EF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3982CCu;
        goto label_3982cc;
    }
    ctx->pc = 0x3982C4u;
    SET_GPR_U32(ctx, 31, 0x3982CCu);
    ctx->pc = 0x3982C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3982C4u;
    // 0x3982c8: 0x24a5b108  addiu       $a1, $a1, -0x4EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0470u, 0x3982C4u, 0x3982CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3982CCu;
label_3982cc:
    // 0x3982cc: 0x1000007d  b           . + 4 + (0x7D << 2)
label_3982d0:
    if (ctx->pc == 0x3982D0u) {
        ctx->pc = 0x3982D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982CCu;
        // 0x3982d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3982D4u;
        goto label_3982d4;
    }
    ctx->pc = 0x3982CCu;
    {
        const bool branch_taken_0x3982cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3982D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982CCu;
        // 0x3982d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3982cc) {
            ctx->pc = 0x3984C4u;
            goto label_3984c4;
        }
    }
    ctx->pc = 0x3982D4u;
label_3982d4:
    // 0x3982d4: 0x0  nop
    ctx->pc = 0x3982d4u;
    // NOP
label_3982d8:
    // 0x3982d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3982d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3982dc:
    // 0x3982dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3982dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3982e0:
    // 0x3982e0: 0xc0eb07e  jal         func_3AC1F8
label_3982e4:
    if (ctx->pc == 0x3982E4u) {
        ctx->pc = 0x3982E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982E0u;
        // 0x3982e4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3982E8u;
        goto label_3982e8;
    }
    ctx->pc = 0x3982E0u;
    SET_GPR_U32(ctx, 31, 0x3982E8u);
    ctx->pc = 0x3982E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3982E0u;
    // 0x3982e4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x3982E0u, 0x3982E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3982E8u;
label_3982e8:
    // 0x3982e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3982e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3982ec:
    // 0x3982ec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3982ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3982f0:
    // 0x3982f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3982f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3982f4:
    // 0x3982f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3982f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3982f8:
    // 0x3982f8: 0x40f809  jalr        $v0
label_3982fc:
    if (ctx->pc == 0x3982FCu) {
        ctx->pc = 0x3982FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982F8u;
        // 0x3982fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398300u;
        goto label_398300;
    }
    ctx->pc = 0x3982F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398300u);
        ctx->pc = 0x3982FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982F8u;
        // 0x3982fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3982F8u, 0x398300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398300u;
label_398300:
    // 0x398300: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x398300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_398304:
    // 0x398304: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x398304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_398308:
    // 0x398308: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_39830c:
    if (ctx->pc == 0x39830Cu) {
        ctx->pc = 0x39830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398308u;
        // 0x39830c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398310u;
        goto label_398310;
    }
    ctx->pc = 0x398308u;
    {
        const bool branch_taken_0x398308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398308) {
            ctx->pc = 0x39830Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398308u;
            // 0x39830c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398338u;
            goto label_398338;
        }
    }
    ctx->pc = 0x398310u;
label_398310:
    // 0x398310: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x398310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_398314:
    // 0x398314: 0xc0eb7f6  jal         func_3ADFD8
label_398318:
    if (ctx->pc == 0x398318u) {
        ctx->pc = 0x398318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398314u;
        // 0x398318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39831Cu;
        goto label_39831c;
    }
    ctx->pc = 0x398314u;
    SET_GPR_U32(ctx, 31, 0x39831Cu);
    ctx->pc = 0x398318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398314u;
    // 0x398318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADFD8u, 0x398314u, 0x39831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39831Cu;
label_39831c:
    // 0x39831c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39831cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398320:
    // 0x398320: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_398324:
    if (ctx->pc == 0x398324u) {
        ctx->pc = 0x398324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398320u;
        // 0x398324: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398328u;
        goto label_398328;
    }
    ctx->pc = 0x398320u;
    {
        const bool branch_taken_0x398320 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x398324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398320u;
        // 0x398324: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398320) {
            ctx->pc = 0x398334u;
            goto label_398334;
        }
    }
    ctx->pc = 0x398328u;
label_398328:
    // 0x398328: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x398328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_39832c:
    // 0x39832c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_398330:
    if (ctx->pc == 0x398330u) {
        ctx->pc = 0x398334u;
        goto label_398334;
    }
    ctx->pc = 0x39832Cu;
    {
        const bool branch_taken_0x39832c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39832c) {
            ctx->pc = 0x398358u;
            goto label_398358;
        }
    }
    ctx->pc = 0x398334u;
label_398334:
    // 0x398334: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x398334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398338:
    // 0x398338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39833c:
    // 0x39833c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39833cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398340:
    // 0x398340: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_398344:
    // 0x398344: 0x40f809  jalr        $v0
label_398348:
    if (ctx->pc == 0x398348u) {
        ctx->pc = 0x398348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398344u;
        // 0x398348: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39834Cu;
        goto label_39834c;
    }
    ctx->pc = 0x398344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39834Cu);
        ctx->pc = 0x398348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398344u;
        // 0x398348: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398344u, 0x39834Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39834Cu;
label_39834c:
    // 0x39834c: 0x1000005f  b           . + 4 + (0x5F << 2)
label_398350:
    if (ctx->pc == 0x398350u) {
        ctx->pc = 0x398350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39834Cu;
        // 0x398350: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398354u;
        goto label_398354;
    }
    ctx->pc = 0x39834Cu;
    {
        const bool branch_taken_0x39834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39834Cu;
        // 0x398350: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39834c) {
            ctx->pc = 0x3984CCu;
            goto label_3984cc;
        }
    }
    ctx->pc = 0x398354u;
label_398354:
    // 0x398354: 0x0  nop
    ctx->pc = 0x398354u;
    // NOP
label_398358:
    // 0x398358: 0x623001b  bgezl       $s1, . + 4 + (0x1B << 2)
label_39835c:
    if (ctx->pc == 0x39835Cu) {
        ctx->pc = 0x39835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398358u;
        // 0x39835c: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398360u;
        goto label_398360;
    }
    ctx->pc = 0x398358u;
    {
        const bool branch_taken_0x398358 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x398358) {
            ctx->pc = 0x39835Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398358u;
            // 0x39835c: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3983C8u;
            goto label_3983c8;
        }
    }
    ctx->pc = 0x398360u;
label_398360:
    // 0x398360: 0x8642009a  lh          $v0, 0x9A($s2)
    ctx->pc = 0x398360u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 154)));
label_398364:
    // 0x398364: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_398368:
    if (ctx->pc == 0x398368u) {
        ctx->pc = 0x398368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398364u;
        // 0x398368: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39836Cu;
        goto label_39836c;
    }
    ctx->pc = 0x398364u;
    {
        const bool branch_taken_0x398364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398364u;
        // 0x398368: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398364) {
            ctx->pc = 0x398380u;
            goto label_398380;
        }
    }
    ctx->pc = 0x39836Cu;
label_39836c:
    // 0x39836c: 0xc0eb7ce  jal         func_3ADF38
label_398370:
    if (ctx->pc == 0x398370u) {
        ctx->pc = 0x398370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39836Cu;
        // 0x398370: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398374u;
        goto label_398374;
    }
    ctx->pc = 0x39836Cu;
    SET_GPR_U32(ctx, 31, 0x398374u);
    ctx->pc = 0x398370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39836Cu;
    // 0x398370: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADF38u, 0x39836Cu, 0x398374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398374u;
label_398374:
    // 0x398374: 0x10000014  b           . + 4 + (0x14 << 2)
label_398378:
    if (ctx->pc == 0x398378u) {
        ctx->pc = 0x398378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398374u;
        // 0x398378: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39837Cu;
        goto label_39837c;
    }
    ctx->pc = 0x398374u;
    {
        const bool branch_taken_0x398374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398374u;
        // 0x398378: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398374) {
            ctx->pc = 0x3983C8u;
            goto label_3983c8;
        }
    }
    ctx->pc = 0x39837Cu;
label_39837c:
    // 0x39837c: 0x0  nop
    ctx->pc = 0x39837cu;
    // NOP
label_398380:
    // 0x398380: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x398380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398384:
    // 0x398384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_398388:
    // 0x398388: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39838c:
    // 0x39838c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x39838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_398390:
    // 0x398390: 0x40f809  jalr        $v0
label_398394:
    if (ctx->pc == 0x398394u) {
        ctx->pc = 0x398394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398390u;
        // 0x398394: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398398u;
        goto label_398398;
    }
    ctx->pc = 0x398390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398398u);
        ctx->pc = 0x398394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398390u;
        // 0x398394: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398390u, 0x398398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398398u;
label_398398:
    // 0x398398: 0xc0eb680  jal         func_3ADA00
label_39839c:
    if (ctx->pc == 0x39839Cu) {
        ctx->pc = 0x3983A0u;
        goto label_3983a0;
    }
    ctx->pc = 0x398398u;
    SET_GPR_U32(ctx, 31, 0x3983A0u);
    ctx->pc = 0x3ADA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADA00u, 0x398398u, 0x3983A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3983A0u;
label_3983a0:
    // 0x3983a0: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_3983a4:
    if (ctx->pc == 0x3983A4u) {
        ctx->pc = 0x3983A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983A0u;
        // 0x3983a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3983A8u;
        goto label_3983a8;
    }
    ctx->pc = 0x3983A0u;
    {
        const bool branch_taken_0x3983a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3983a0) {
            ctx->pc = 0x3983A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3983A0u;
            // 0x3983a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3984C4u;
            goto label_3984c4;
        }
    }
    ctx->pc = 0x3983A8u;
label_3983a8:
    // 0x3983a8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3983a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3983ac:
    // 0x3983ac: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3983acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3983b0:
    // 0x3983b0: 0x2484b128  addiu       $a0, $a0, -0x4ED8
    ctx->pc = 0x3983b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947112));
label_3983b4:
    // 0x3983b4: 0xc0ec11c  jal         func_3B0470
label_3983b8:
    if (ctx->pc == 0x3983B8u) {
        ctx->pc = 0x3983B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983B4u;
        // 0x3983b8: 0x24a5b148  addiu       $a1, $a1, -0x4EB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3983BCu;
        goto label_3983bc;
    }
    ctx->pc = 0x3983B4u;
    SET_GPR_U32(ctx, 31, 0x3983BCu);
    ctx->pc = 0x3983B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3983B4u;
    // 0x3983b8: 0x24a5b148  addiu       $a1, $a1, -0x4EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0470u, 0x3983B4u, 0x3983BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3983BCu;
label_3983bc:
    // 0x3983bc: 0x10000041  b           . + 4 + (0x41 << 2)
label_3983c0:
    if (ctx->pc == 0x3983C0u) {
        ctx->pc = 0x3983C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983BCu;
        // 0x3983c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3983C4u;
        goto label_3983c4;
    }
    ctx->pc = 0x3983BCu;
    {
        const bool branch_taken_0x3983bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3983C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983BCu;
        // 0x3983c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3983bc) {
            ctx->pc = 0x3984C4u;
            goto label_3984c4;
        }
    }
    ctx->pc = 0x3983C4u;
label_3983c4:
    // 0x3983c4: 0x0  nop
    ctx->pc = 0x3983c4u;
    // NOP
label_3983c8:
    // 0x3983c8: 0xc0eb85c  jal         func_3AE170
label_3983cc:
    if (ctx->pc == 0x3983CCu) {
        ctx->pc = 0x3983CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983C8u;
        // 0x3983cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3983D0u;
        goto label_3983d0;
    }
    ctx->pc = 0x3983C8u;
    SET_GPR_U32(ctx, 31, 0x3983D0u);
    ctx->pc = 0x3983CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3983C8u;
    // 0x3983cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE170u, 0x3983C8u, 0x3983D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3983D0u;
label_3983d0:
    // 0x3983d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3983d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3983d4:
    // 0x3983d4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_3983d8:
    if (ctx->pc == 0x3983D8u) {
        ctx->pc = 0x3983D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983D4u;
        // 0x3983d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3983DCu;
        goto label_3983dc;
    }
    ctx->pc = 0x3983D4u;
    {
        const bool branch_taken_0x3983d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3983D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983D4u;
        // 0x3983d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3983d4) {
            ctx->pc = 0x3983E0u;
            goto label_3983e0;
        }
    }
    ctx->pc = 0x3983DCu;
label_3983dc:
    // 0x3983dc: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x3983dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_3983e0:
    // 0x3983e0: 0xc0eb85c  jal         func_3AE170
label_3983e4:
    if (ctx->pc == 0x3983E4u) {
        ctx->pc = 0x3983E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983E0u;
        // 0x3983e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3983E8u;
        goto label_3983e8;
    }
    ctx->pc = 0x3983E0u;
    SET_GPR_U32(ctx, 31, 0x3983E8u);
    ctx->pc = 0x3983E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3983E0u;
    // 0x3983e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE170u, 0x3983E0u, 0x3983E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3983E8u;
label_3983e8:
    // 0x3983e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3983e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3983ec:
    // 0x3983ec: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_3983f0:
    if (ctx->pc == 0x3983F0u) {
        ctx->pc = 0x3983F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983ECu;
        // 0x3983f0: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3983F4u;
        goto label_3983f4;
    }
    ctx->pc = 0x3983ECu;
    {
        const bool branch_taken_0x3983ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3983F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983ECu;
        // 0x3983f0: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3983ec) {
            ctx->pc = 0x39840Cu;
            goto label_39840c;
        }
    }
    ctx->pc = 0x3983F4u;
label_3983f4:
    // 0x3983f4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3983f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3983f8:
    // 0x3983f8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3983f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3983fc:
    // 0x3983fc: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x3983fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
label_398400:
    // 0x398400: 0x28c20041  slti        $v0, $a2, 0x41
    ctx->pc = 0x398400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)65) ? 1 : 0);
label_398404:
    // 0x398404: 0xc0efa49  jal         func_3BE924
label_398408:
    if (ctx->pc == 0x398408u) {
        ctx->pc = 0x398408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398404u;
        // 0x398408: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39840Cu;
        goto label_39840c;
    }
    ctx->pc = 0x398404u;
    SET_GPR_U32(ctx, 31, 0x39840Cu);
    ctx->pc = 0x398408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398404u;
    // 0x398408: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x398404u, 0x39840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39840Cu;
label_39840c:
    // 0x39840c: 0xc0eb85c  jal         func_3AE170
label_398410:
    if (ctx->pc == 0x398410u) {
        ctx->pc = 0x398410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39840Cu;
        // 0x398410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398414u;
        goto label_398414;
    }
    ctx->pc = 0x39840Cu;
    SET_GPR_U32(ctx, 31, 0x398414u);
    ctx->pc = 0x398410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39840Cu;
    // 0x398410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE170u, 0x39840Cu, 0x398414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398414u;
label_398414:
    // 0x398414: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x398414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398418:
    // 0x398418: 0x2462fff6  addiu       $v0, $v1, -0xA
    ctx->pc = 0x398418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_39841c:
    // 0x39841c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x39841cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_398420:
    // 0x398420: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_398424:
    if (ctx->pc == 0x398424u) {
        ctx->pc = 0x398424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398420u;
        // 0x398424: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398428u;
        goto label_398428;
    }
    ctx->pc = 0x398420u;
    {
        const bool branch_taken_0x398420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398420) {
            ctx->pc = 0x398424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398420u;
            // 0x398424: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398440u;
            goto label_398440;
        }
    }
    ctx->pc = 0x398428u;
label_398428:
    // 0x398428: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x398428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_39842c:
    // 0x39842c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_398430:
    if (ctx->pc == 0x398430u) {
        ctx->pc = 0x398430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39842Cu;
        // 0x398430: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398434u;
        goto label_398434;
    }
    ctx->pc = 0x39842Cu;
    {
        const bool branch_taken_0x39842c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x398430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39842Cu;
        // 0x398430: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39842c) {
            ctx->pc = 0x39843Cu;
            goto label_39843c;
        }
    }
    ctx->pc = 0x398434u;
label_398434:
    // 0x398434: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_398438:
    if (ctx->pc == 0x398438u) {
        ctx->pc = 0x398438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398434u;
        // 0x398438: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39843Cu;
        goto label_39843c;
    }
    ctx->pc = 0x398434u;
    {
        const bool branch_taken_0x398434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x398438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398434u;
        // 0x398438: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398434) {
            ctx->pc = 0x398460u;
            goto label_398460;
        }
    }
    ctx->pc = 0x39843Cu;
label_39843c:
    // 0x39843c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39843cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398440:
    // 0x398440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_398444:
    // 0x398444: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398448:
    // 0x398448: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_39844c:
    // 0x39844c: 0x40f809  jalr        $v0
label_398450:
    if (ctx->pc == 0x398450u) {
        ctx->pc = 0x398450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39844Cu;
        // 0x398450: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398454u;
        goto label_398454;
    }
    ctx->pc = 0x39844Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398454u);
        ctx->pc = 0x398450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39844Cu;
        // 0x398450: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39844Cu, 0x398454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398454u;
label_398454:
    // 0x398454: 0x10000013  b           . + 4 + (0x13 << 2)
label_398458:
    if (ctx->pc == 0x398458u) {
        ctx->pc = 0x398458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398454u;
        // 0x398458: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39845Cu;
        goto label_39845c;
    }
    ctx->pc = 0x398454u;
    {
        const bool branch_taken_0x398454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398454u;
        // 0x398458: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398454) {
            ctx->pc = 0x3984A4u;
            goto label_3984a4;
        }
    }
    ctx->pc = 0x39845Cu;
label_39845c:
    // 0x39845c: 0x0  nop
    ctx->pc = 0x39845cu;
    // NOP
label_398460:
    // 0x398460: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x398460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398464:
    // 0x398464: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x398464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398468:
    // 0x398468: 0xc0eb07e  jal         func_3AC1F8
label_39846c:
    if (ctx->pc == 0x39846Cu) {
        ctx->pc = 0x39846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398468u;
        // 0x39846c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398470u;
        goto label_398470;
    }
    ctx->pc = 0x398468u;
    SET_GPR_U32(ctx, 31, 0x398470u);
    ctx->pc = 0x39846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398468u;
    // 0x39846c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x398468u, 0x398470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398470u;
label_398470:
    // 0x398470: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x398470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398474:
    // 0x398474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_398478:
    // 0x398478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39847c:
    // 0x39847c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x39847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_398480:
    // 0x398480: 0x40f809  jalr        $v0
label_398484:
    if (ctx->pc == 0x398484u) {
        ctx->pc = 0x398484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398480u;
        // 0x398484: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398488u;
        goto label_398488;
    }
    ctx->pc = 0x398480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398488u);
        ctx->pc = 0x398484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398480u;
        // 0x398484: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398480u, 0x398488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398488u;
label_398488:
    // 0x398488: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x398488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39848c:
    // 0x39848c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39848cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_398490:
    // 0x398490: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x398490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_398494:
    // 0x398494: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_398498:
    // 0x398498: 0x40f809  jalr        $v0
label_39849c:
    if (ctx->pc == 0x39849Cu) {
        ctx->pc = 0x39849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398498u;
        // 0x39849c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3984A0u;
        goto label_3984a0;
    }
    ctx->pc = 0x398498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3984A0u);
        ctx->pc = 0x39849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398498u;
        // 0x39849c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398498u, 0x3984A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3984A0u;
label_3984a0:
    // 0x3984a0: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x3984a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_3984a4:
    // 0x3984a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3984a8:
    if (ctx->pc == 0x3984A8u) {
        ctx->pc = 0x3984A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984A4u;
        // 0x3984a8: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3984ACu;
        goto label_3984ac;
    }
    ctx->pc = 0x3984A4u;
    {
        const bool branch_taken_0x3984a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3984A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984A4u;
        // 0x3984a8: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3984a4) {
            ctx->pc = 0x3984C0u;
            goto label_3984c0;
        }
    }
    ctx->pc = 0x3984ACu;
label_3984ac:
    // 0x3984ac: 0x8c42921c  lw          $v0, -0x6DE4($v0)
    ctx->pc = 0x3984acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939164)));
label_3984b0:
    // 0x3984b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3984b4:
    if (ctx->pc == 0x3984B4u) {
        ctx->pc = 0x3984B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984B0u;
        // 0x3984b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3984B8u;
        goto label_3984b8;
    }
    ctx->pc = 0x3984B0u;
    {
        const bool branch_taken_0x3984b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3984B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984B0u;
        // 0x3984b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3984b0) {
            ctx->pc = 0x3984C0u;
            goto label_3984c0;
        }
    }
    ctx->pc = 0x3984B8u;
label_3984b8:
    // 0x3984b8: 0x40f809  jalr        $v0
label_3984bc:
    if (ctx->pc == 0x3984BCu) {
        ctx->pc = 0x3984BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984B8u;
        // 0x3984bc: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3984C0u;
        goto label_3984c0;
    }
    ctx->pc = 0x3984B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3984C0u);
        ctx->pc = 0x3984BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984B8u;
        // 0x3984bc: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3984B8u, 0x3984C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3984C0u;
label_3984c0:
    // 0x3984c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3984c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3984c4:
    // 0x3984c4: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x3984c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_3984c8:
    // 0x3984c8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3984c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3984cc:
    // 0x3984cc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3984ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3984d0:
    // 0x3984d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3984d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3984d4:
    // 0x3984d4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3984d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3984d8:
    // 0x3984d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3984d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3984dc:
    // 0x3984dc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3984dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3984e0:
    // 0x3984e0: 0x3e00008  jr          $ra
label_3984e4:
    if (ctx->pc == 0x3984E4u) {
        ctx->pc = 0x3984E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984E0u;
        // 0x3984e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3984E8u;
        goto label_fallthrough_0x3984e0;
    }
    ctx->pc = 0x3984E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3984E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984E0u;
        // 0x3984e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3984E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3984e0:
    ctx->pc = 0x3984E8u;
}
