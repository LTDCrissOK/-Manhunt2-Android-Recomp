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

// Function: sub_0015D1D8
// Address: 0x15d1d8 - 0x15d538
void sub_0015D1D8_0x15d1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D1D8_0x15d1d8");
#endif

    switch (ctx->pc) {
        case 0x15d240u: goto label_15d240;
        case 0x15d278u: goto label_15d278;
        case 0x15d288u: goto label_15d288;
        case 0x15d2b4u: goto label_15d2b4;
        case 0x15d2c8u: goto label_15d2c8;
        case 0x15d2d8u: goto label_15d2d8;
        case 0x15d2f0u: goto label_15d2f0;
        case 0x15d350u: goto label_15d350;
        case 0x15d360u: goto label_15d360;
        case 0x15d378u: goto label_15d378;
        case 0x15d390u: goto label_15d390;
        case 0x15d3a4u: goto label_15d3a4;
        case 0x15d400u: goto label_15d400;
        case 0x15d42cu: goto label_15d42c;
        case 0x15d438u: goto label_15d438;
        case 0x15d450u: goto label_15d450;
        case 0x15d460u: goto label_15d460;
        case 0x15d47cu: goto label_15d47c;
        case 0x15d490u: goto label_15d490;
        case 0x15d4dcu: goto label_15d4dc;
        case 0x15d4e8u: goto label_15d4e8;
        case 0x15d4fcu: goto label_15d4fc;
        case 0x15d508u: goto label_15d508;
        default: break;
    }

    ctx->pc = 0x15d1d8u;

    // 0x15d1d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15d1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15d1dc: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x15d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15d1e0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x15d1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x15d1e4: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x15d1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x15d1e8: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x15d1e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15d1ec: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x15d1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x15d1f0: 0x2631018  mult        $v0, $s3, $v1
    ctx->pc = 0x15d1f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15d1f4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x15d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x15d1f8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x15d1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x15d1fc: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x15d1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x15d200: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x15d200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x15d204: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15d204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d208: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x15d208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x15d20c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x15d20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x15d210: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x15d210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15d214: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x15d214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x15d218: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15d218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15d21c: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x15d21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x15d220: 0x2451b060  addiu       $s1, $v0, -0x4FA0
    ctx->pc = 0x15d220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x15d224: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x15d224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x15d228: 0x8e440214  lw          $a0, 0x214($s2)
    ctx->pc = 0x15d228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15d22c: 0x8c740320  lw          $s4, 0x320($v1)
    ctx->pc = 0x15d22cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x15d230: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x15d230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15d234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d238: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x15D238u;
    SET_GPR_U32(ctx, 31, 0x15D240u);
    ctx->pc = 0x15D23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D238u;
    // 0x15d23c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x15D238u, 0x15D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D240u;
label_15d240:
    // 0x15d240: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d244: 0x120000b0  beqz        $s0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x15D244u;
    {
        const bool branch_taken_0x15d244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D244u;
        // 0x15d248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d244) {
            ctx->pc = 0x15D508u;
            goto label_15d508;
        }
    }
    ctx->pc = 0x15D24Cu;
    // 0x15d24c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15d250: 0x8e43031c  lw          $v1, 0x31C($s2)
    ctx->pc = 0x15d250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
    // 0x15d254: 0x8e170010  lw          $s7, 0x10($s0)
    ctx->pc = 0x15d254u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15d258: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x15d258u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x15d25c: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x15d25cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d260: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15d260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15d264: 0x8e150008  lw          $s5, 0x8($s0)
    ctx->pc = 0x15d264u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15d268: 0x8e1e0018  lw          $fp, 0x18($s0)
    ctx->pc = 0x15d268u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15d26c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x15d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x15d270: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x15D270u;
    SET_GPR_U32(ctx, 31, 0x15D278u);
    ctx->pc = 0x15D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D270u;
    // 0x15d274: 0xae42031c  sw          $v0, 0x31C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x15D270u, 0x15D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D278u;
label_15d278:
    // 0x15d278: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15d278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15d27c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d280: 0xc042128  jal         func_1084A0
    ctx->pc = 0x15D280u;
    SET_GPR_U32(ctx, 31, 0x15D288u);
    ctx->pc = 0x15D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D280u;
    // 0x15d284: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x15D280u, 0x15D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D288u;
label_15d288:
    // 0x15d288: 0x52e000a0  beql        $s7, $zero, . + 4 + (0xA0 << 2)
    ctx->pc = 0x15D288u;
    {
        const bool branch_taken_0x15d288 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d288) {
            ctx->pc = 0x15D28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D288u;
            // 0x15d28c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D50Cu;
            goto label_15d50c;
        }
    }
    ctx->pc = 0x15D290u;
    // 0x15d290: 0x8e42031c  lw          $v0, 0x31C($s2)
    ctx->pc = 0x15d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
    // 0x15d294: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x15D294u;
    {
        const bool branch_taken_0x15d294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D294u;
        // 0x15d298: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d294) {
            ctx->pc = 0x15D318u;
            goto label_15d318;
        }
    }
    ctx->pc = 0x15D29Cu;
    // 0x15d29c: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D29Cu;
    {
        const bool branch_taken_0x15d29c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D29Cu;
        // 0x15d2a0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d29c) {
            ctx->pc = 0x15D2BCu;
            goto label_15d2bc;
        }
    }
    ctx->pc = 0x15D2A4u;
    // 0x15d2a4: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x15d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15d2a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2ac: 0xc04add4  jal         func_12B750
    ctx->pc = 0x15D2ACu;
    SET_GPR_U32(ctx, 31, 0x15D2B4u);
    ctx->pc = 0x15D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D2ACu;
    // 0x15d2b0: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B750u, 0x15D2ACu, 0x15D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D2B4u;
label_15d2b4:
    // 0x15d2b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15D2B4u;
    {
        const bool branch_taken_0x15d2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2B4u;
        // 0x15d2b8: 0x8e42031c  lw          $v0, 0x31C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2b4) {
            ctx->pc = 0x15D2F4u;
            goto label_15d2f4;
        }
    }
    ctx->pc = 0x15D2BCu;
label_15d2bc:
    // 0x15d2bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2c0: 0xc04f0b6  jal         func_13C2D8
    ctx->pc = 0x15D2C0u;
    SET_GPR_U32(ctx, 31, 0x15D2C8u);
    ctx->pc = 0x15D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D2C0u;
    // 0x15d2c4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15D2C0u, 0x15D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D2C8u;
label_15d2c8:
    // 0x15d2c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15d2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d2d0: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x15D2D0u;
    SET_GPR_U32(ctx, 31, 0x15D2D8u);
    ctx->pc = 0x15D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D2D0u;
    // 0x15d2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x15D2D0u, 0x15D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D2D8u;
label_15d2d8:
    // 0x15d2d8: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x15d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15d2dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15d2e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15d2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2e8: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x15D2E8u;
    SET_GPR_U32(ctx, 31, 0x15D2F0u);
    ctx->pc = 0x15D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D2E8u;
    // 0x15d2ec: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x15D2E8u, 0x15D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D2F0u;
label_15d2f0:
    // 0x15d2f0: 0x8e42031c  lw          $v0, 0x31C($s2)
    ctx->pc = 0x15d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
label_15d2f4:
    // 0x15d2f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D2F4u;
    {
        const bool branch_taken_0x15d2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2F4u;
        // 0x15d2f8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2f4) {
            ctx->pc = 0x15D318u;
            goto label_15d318;
        }
    }
    ctx->pc = 0x15D2FCu;
    // 0x15d2fc: 0x12a20006  beq         $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D2FCu;
    {
        const bool branch_taken_0x15d2fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2FCu;
        // 0x15d300: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2fc) {
            ctx->pc = 0x15D318u;
            goto label_15d318;
        }
    }
    ctx->pc = 0x15D304u;
    // 0x15d304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d308: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x15d308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15d30c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x15d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x15d310: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x15D310u;
    {
        const bool branch_taken_0x15d310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D310u;
        // 0x15d314: 0xac430348  sw          $v1, 0x348($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d310) {
            ctx->pc = 0x15D3B4u;
            goto label_15d3b4;
        }
    }
    ctx->pc = 0x15D318u;
label_15d318:
    // 0x15d318: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15d318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15d31c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x15d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x15d320: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x15d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x15d324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d328: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x15d328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x15d32c: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15D32Cu;
    {
        const bool branch_taken_0x15d32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D32Cu;
        // 0x15d330: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d32c) {
            ctx->pc = 0x15D3A4u;
            goto label_15d3a4;
        }
    }
    ctx->pc = 0x15D334u;
    // 0x15d334: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x15d334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15d338: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x15d338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15d33c: 0x8c430348  lw          $v1, 0x348($v0)
    ctx->pc = 0x15d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x15d340: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x15D340u;
    {
        const bool branch_taken_0x15d340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D340u;
        // 0x15d344: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d340) {
            ctx->pc = 0x15D3A8u;
            goto label_15d3a8;
        }
    }
    ctx->pc = 0x15D348u;
    // 0x15d348: 0xc043958  jal         func_10E560
    ctx->pc = 0x15D348u;
    SET_GPR_U32(ctx, 31, 0x15D350u);
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x15D348u, 0x15D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D350u;
label_15d350:
    // 0x15d350: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15D350u;
    {
        const bool branch_taken_0x15d350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D350u;
        // 0x15d354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d350) {
            ctx->pc = 0x15D3A4u;
            goto label_15d3a4;
        }
    }
    ctx->pc = 0x15D358u;
    // 0x15d358: 0xc04f0b6  jal         func_13C2D8
    ctx->pc = 0x15D358u;
    SET_GPR_U32(ctx, 31, 0x15D360u);
    ctx->pc = 0x15D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D358u;
    // 0x15d35c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15D358u, 0x15D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D360u;
label_15d360:
    // 0x15d360: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15d360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15d364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d368: 0x2491b060  addiu       $s1, $a0, -0x4FA0
    ctx->pc = 0x15d368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x15d36c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15d36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d370: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x15D370u;
    SET_GPR_U32(ctx, 31, 0x15D378u);
    ctx->pc = 0x15D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D370u;
    // 0x15d374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x15D370u, 0x15D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D378u;
label_15d378:
    // 0x15d378: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x15d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15d37c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d380: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15d380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d384: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15d384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d388: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x15D388u;
    SET_GPR_U32(ctx, 31, 0x15D390u);
    ctx->pc = 0x15D38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D388u;
    // 0x15d38c: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x15D388u, 0x15D390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D390u;
label_15d390:
    // 0x15d390: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x15d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15d394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d398: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15d398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d39c: 0xc04add4  jal         func_12B750
    ctx->pc = 0x15D39Cu;
    SET_GPR_U32(ctx, 31, 0x15D3A4u);
    ctx->pc = 0x15D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D39Cu;
    // 0x15d3a0: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B750u, 0x15D39Cu, 0x15D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3A4u;
label_15d3a4:
    // 0x15d3a4: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15d3a8:
    // 0x15d3a8: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x15d3a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15d3ac: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x15d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15d3b0: 0xac400348  sw          $zero, 0x348($v0)
    ctx->pc = 0x15d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 840), GPR_U32(ctx, 0));
label_15d3b4:
    // 0x15d3b4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15d3b8: 0x16c20006  bne         $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D3B8u;
    {
        const bool branch_taken_0x15d3b8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x15D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3B8u;
        // 0x15d3bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3b8) {
            ctx->pc = 0x15D3D4u;
            goto label_15d3d4;
        }
    }
    ctx->pc = 0x15D3C0u;
    // 0x15d3c0: 0x12b60003  beq         $s5, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D3C0u;
    {
        const bool branch_taken_0x15d3c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x15D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3C0u;
        // 0x15d3c4: 0x2aa20002  slti        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3c0) {
            ctx->pc = 0x15D3D0u;
            goto label_15d3d0;
        }
    }
    ctx->pc = 0x15D3C8u;
    // 0x15d3c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15D3C8u;
    {
        const bool branch_taken_0x15d3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d3c8) {
            ctx->pc = 0x15D3D4u;
            goto label_15d3d4;
        }
    }
    ctx->pc = 0x15D3D0u;
label_15d3d0:
    // 0x15d3d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d3d4:
    // 0x15d3d4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x15D3D4u;
    {
        const bool branch_taken_0x15d3d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3D4u;
        // 0x15d3d8: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3d4) {
            ctx->pc = 0x15D40Cu;
            goto label_15d40c;
        }
    }
    ctx->pc = 0x15D3DCu;
    // 0x15d3dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d3e0: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x15d3e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15d3e4: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x15d3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15d3e8: 0x8e030324  lw          $v1, 0x324($s0)
    ctx->pc = 0x15d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x15d3ec: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D3ECu;
    {
        const bool branch_taken_0x15d3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x15D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3ECu;
        // 0x15d3f0: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3ec) {
            ctx->pc = 0x15D404u;
            goto label_15d404;
        }
    }
    ctx->pc = 0x15D3F4u;
    // 0x15d3f4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x15d3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3f8: 0xc04f582  jal         func_13D608
    ctx->pc = 0x15D3F8u;
    SET_GPR_U32(ctx, 31, 0x15D400u);
    ctx->pc = 0x15D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D3F8u;
    // 0x15d3fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D608u, 0x15D3F8u, 0x15D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D400u;
label_15d400:
    // 0x15d400: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x15d400u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15d404:
    // 0x15d404: 0x54a0001f  bnel        $a1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x15D404u;
    {
        const bool branch_taken_0x15d404 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d404) {
            ctx->pc = 0x15D408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D404u;
            // 0x15d408: 0x8e4502e4  lw          $a1, 0x2E4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D484u;
            goto label_15d484;
        }
    }
    ctx->pc = 0x15D40Cu;
label_15d40c:
    // 0x15d40c: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15d410: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x15d410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15d414: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x15d414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15d418: 0x8e11033c  lw          $s1, 0x33C($s0)
    ctx->pc = 0x15d418u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
    // 0x15d41c: 0x5220003b  beql        $s1, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x15D41Cu;
    {
        const bool branch_taken_0x15d41c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d41c) {
            ctx->pc = 0x15D420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D41Cu;
            // 0x15d420: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D50Cu;
            goto label_15d50c;
        }
    }
    ctx->pc = 0x15D424u;
    // 0x15d424: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15D424u;
    SET_GPR_U32(ctx, 31, 0x15D42Cu);
    ctx->pc = 0x15D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D424u;
    // 0x15d428: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15D424u, 0x15D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D42Cu;
label_15d42c:
    // 0x15d42c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15d42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d430: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x15D430u;
    SET_GPR_U32(ctx, 31, 0x15D438u);
    ctx->pc = 0x15D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D430u;
    // 0x15d434: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x15D430u, 0x15D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D438u;
label_15d438:
    // 0x15d438: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15D438u;
    {
        const bool branch_taken_0x15d438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D438u;
        // 0x15d43c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d438) {
            ctx->pc = 0x15D468u;
            goto label_15d468;
        }
    }
    ctx->pc = 0x15D440u;
    // 0x15d440: 0xae000340  sw          $zero, 0x340($s0)
    ctx->pc = 0x15d440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    // 0x15d444: 0xae00033c  sw          $zero, 0x33C($s0)
    ctx->pc = 0x15d444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 0));
    // 0x15d448: 0xc0573be  jal         func_15CEF8
    ctx->pc = 0x15D448u;
    SET_GPR_U32(ctx, 31, 0x15D450u);
    ctx->pc = 0x15D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D448u;
    // 0x15d44c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CEF8u, 0x15D448u, 0x15D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D450u;
label_15d450:
    // 0x15d450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d454: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15d454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d458: 0xc057952  jal         func_15E548
    ctx->pc = 0x15D458u;
    SET_GPR_U32(ctx, 31, 0x15D460u);
    ctx->pc = 0x15D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D458u;
    // 0x15d45c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E548u, 0x15D458u, 0x15D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D460u;
label_15d460:
    // 0x15d460: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15D460u;
    {
        const bool branch_taken_0x15d460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D460u;
        // 0x15d464: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d460) {
            ctx->pc = 0x15D474u;
            goto label_15d474;
        }
    }
    ctx->pc = 0x15D468u;
label_15d468:
    // 0x15d468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d46c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15d46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d470: 0xae020330  sw          $v0, 0x330($s0)
    ctx->pc = 0x15d470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
label_15d474:
    // 0x15d474: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15D474u;
    SET_GPR_U32(ctx, 31, 0x15D47Cu);
    ctx->pc = 0x15D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D474u;
    // 0x15d478: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15D474u, 0x15D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D47Cu;
label_15d47c:
    // 0x15d47c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15D47Cu;
    {
        const bool branch_taken_0x15d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D47Cu;
        // 0x15d480: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d47c) {
            ctx->pc = 0x15D50Cu;
            goto label_15d50c;
        }
    }
    ctx->pc = 0x15D484u;
label_15d484:
    // 0x15d484: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x15d484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d488: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15D488u;
    SET_GPR_U32(ctx, 31, 0x15D490u);
    ctx->pc = 0x15D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D488u;
    // 0x15d48c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15D488u, 0x15D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D490u;
label_15d490:
    // 0x15d490: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x15d490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d494: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x15d494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d498: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x15d498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d49c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x15d49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15d4a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15d4a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15d4a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15d4a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15d4a8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15d4a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15d4ac: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x15d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d4b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d4b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d4b4: 0x0  nop
    ctx->pc = 0x15d4b4u;
    // NOP
    // 0x15d4b8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x15D4B8u;
    {
        const bool branch_taken_0x15d4b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4B8u;
        // 0x15d4bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4b8) {
            ctx->pc = 0x15D4F0u;
            goto label_15d4f0;
        }
    }
    ctx->pc = 0x15D4C0u;
    // 0x15d4c0: 0xae020330  sw          $v0, 0x330($s0)
    ctx->pc = 0x15d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
    // 0x15d4c4: 0x8e43031c  lw          $v1, 0x31C($s2)
    ctx->pc = 0x15d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
    // 0x15d4c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15d4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d4cc: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15D4CCu;
    {
        const bool branch_taken_0x15d4cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4CCu;
        // 0x15d4d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4cc) {
            ctx->pc = 0x15D508u;
            goto label_15d508;
        }
    }
    ctx->pc = 0x15D4D4u;
    // 0x15d4d4: 0xc0573be  jal         func_15CEF8
    ctx->pc = 0x15D4D4u;
    SET_GPR_U32(ctx, 31, 0x15D4DCu);
    ctx->pc = 0x15D4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D4D4u;
    // 0x15d4d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CEF8u, 0x15D4D4u, 0x15D4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D4DCu;
label_15d4dc:
    // 0x15d4dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d4e0: 0xc0570d0  jal         func_15C340
    ctx->pc = 0x15D4E0u;
    SET_GPR_U32(ctx, 31, 0x15D4E8u);
    ctx->pc = 0x15D4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D4E0u;
    // 0x15d4e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C340u, 0x15D4E0u, 0x15D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D4E8u;
label_15d4e8:
    // 0x15d4e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15D4E8u;
    {
        const bool branch_taken_0x15d4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4E8u;
        // 0x15d4ec: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4e8) {
            ctx->pc = 0x15D50Cu;
            goto label_15d50c;
        }
    }
    ctx->pc = 0x15D4F0u;
label_15d4f0:
    // 0x15d4f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d4f4: 0xc0573be  jal         func_15CEF8
    ctx->pc = 0x15D4F4u;
    SET_GPR_U32(ctx, 31, 0x15D4FCu);
    ctx->pc = 0x15D4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D4F4u;
    // 0x15d4f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CEF8u, 0x15D4F4u, 0x15D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D4FCu;
label_15d4fc:
    // 0x15d4fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d500: 0xc057150  jal         func_15C540
    ctx->pc = 0x15D500u;
    SET_GPR_U32(ctx, 31, 0x15D508u);
    ctx->pc = 0x15D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D500u;
    // 0x15d504: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C540u, 0x15D500u, 0x15D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D508u;
label_15d508:
    // 0x15d508: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x15d508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15d50c:
    // 0x15d50c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x15d50cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d510: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x15d510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d514: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x15d514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d518: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x15d518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d51c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x15d51cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15d520: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x15d520u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15d524: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x15d524u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15d528: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x15d528u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15d52c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x15d52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x15d530: 0x3e00008  jr          $ra
    ctx->pc = 0x15D530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D530u;
        // 0x15d534: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D538u;
}
