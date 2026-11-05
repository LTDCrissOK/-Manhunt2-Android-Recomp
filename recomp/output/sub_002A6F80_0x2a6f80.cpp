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

// Function: sub_002A6F80
// Address: 0x2a6f80 - 0x2a7088
void sub_002A6F80_0x2a6f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6F80_0x2a6f80");
#endif

    switch (ctx->pc) {
        case 0x2a7010u: goto label_2a7010;
        case 0x2a7034u: goto label_2a7034;
        case 0x2a7058u: goto label_2a7058;
        case 0x2a7078u: goto label_2a7078;
        default: break;
    }

    ctx->pc = 0x2a6f80u;

    // 0x2a6f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a6f84: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a6f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a6f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a6f8c: 0xc48002d4  lwc1        $f0, 0x2D4($a0)
    ctx->pc = 0x2a6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6f90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a6f90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a6f94: 0x0  nop
    ctx->pc = 0x2a6f94u;
    // NOP
    // 0x2a6f98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6F98u;
    {
        const bool branch_taken_0x2a6f98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F98u;
        // 0x2a6f9c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f98) {
            ctx->pc = 0x2A6FB0u;
            goto label_2a6fb0;
        }
    }
    ctx->pc = 0x2A6FA0u;
    // 0x2a6fa0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2a6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a6fa4: 0x904302d8  lbu         $v1, 0x2D8($v0)
    ctx->pc = 0x2a6fa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 728)));
    // 0x2a6fa8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6FA8u;
    {
        const bool branch_taken_0x2a6fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FA8u;
        // 0x2a6fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fa8) {
            ctx->pc = 0x2A6FB8u;
            goto label_2a6fb8;
        }
    }
    ctx->pc = 0x2A6FB0u;
label_2a6fb0:
    // 0x2a6fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6fb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6fb8:
    // 0x2a6fb8: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A6FB8u;
    {
        const bool branch_taken_0x2a6fb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FB8u;
        // 0x2a6fbc: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fb8) {
            ctx->pc = 0x2A7018u;
            goto label_2a7018;
        }
    }
    ctx->pc = 0x2A6FC0u;
    // 0x2a6fc0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6FC0u;
    {
        const bool branch_taken_0x2a6fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6fc0) {
            ctx->pc = 0x2A6FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6FC0u;
            // 0x2a6fc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6FD8u;
            goto label_2a6fd8;
        }
    }
    ctx->pc = 0x2A6FC8u;
    // 0x2a6fc8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A6FC8u;
    {
        const bool branch_taken_0x2a6fc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FC8u;
        // 0x2a6fcc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fc8) {
            ctx->pc = 0x2A6FF0u;
            goto label_2a6ff0;
        }
    }
    ctx->pc = 0x2A6FD0u;
    // 0x2a6fd0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2A6FD0u;
    {
        const bool branch_taken_0x2a6fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6fd0) {
            ctx->pc = 0x2A707Cu;
            goto label_2a707c;
        }
    }
    ctx->pc = 0x2A6FD8u;
label_2a6fd8:
    // 0x2a6fd8: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A6FD8u;
    {
        const bool branch_taken_0x2a6fd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FD8u;
        // 0x2a6fdc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fd8) {
            ctx->pc = 0x2A703Cu;
            goto label_2a703c;
        }
    }
    ctx->pc = 0x2A6FE0u;
    // 0x2a6fe0: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2A6FE0u;
    {
        const bool branch_taken_0x2a6fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FE0u;
        // 0x2a6fe4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fe0) {
            ctx->pc = 0x2A7060u;
            goto label_2a7060;
        }
    }
    ctx->pc = 0x2A6FE8u;
    // 0x2a6fe8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2A6FE8u;
    {
        const bool branch_taken_0x2a6fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6fe8) {
            ctx->pc = 0x2A707Cu;
            goto label_2a707c;
        }
    }
    ctx->pc = 0x2A6FF0u;
label_2a6ff0:
    // 0x2a6ff0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2a6ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2a6ff4: 0x90432395  lbu         $v1, 0x2395($v0)
    ctx->pc = 0x2a6ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x4C2395u));
    // 0x2a6ff8: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A6FF8u;
    {
        const bool branch_taken_0x2a6ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FF8u;
        // 0x2a6ffc: 0x24840268  addiu       $a0, $a0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ff8) {
            ctx->pc = 0x2A707Cu;
            goto label_2a707c;
        }
    }
    ctx->pc = 0x2A7000u;
    // 0x2a7000: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7004: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a7004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7008: 0xc0a9c6c  jal         func_2A71B0
    ctx->pc = 0x2A7008u;
    SET_GPR_U32(ctx, 31, 0x2A7010u);
    ctx->pc = 0x2A700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7008u;
    // 0x2a700c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A71B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A71B0u, 0x2A7008u, 0x2A7010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7010u;
label_2a7010:
    // 0x2a7010: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A7010u;
    {
        const bool branch_taken_0x2a7010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7010u;
        // 0x2a7014: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7010) {
            ctx->pc = 0x2A707Cu;
            goto label_2a707c;
        }
    }
    ctx->pc = 0x2A7018u;
label_2a7018:
    // 0x2a7018: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2a7018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2a701c: 0x90432396  lbu         $v1, 0x2396($v0)
    ctx->pc = 0x2a701cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x4C2396u));
    // 0x2a7020: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A7020u;
    {
        const bool branch_taken_0x2a7020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7020u;
        // 0x2a7024: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7020) {
            ctx->pc = 0x2A707Cu;
            goto label_2a707c;
        }
    }
    ctx->pc = 0x2A7028u;
    // 0x2a7028: 0x24840268  addiu       $a0, $a0, 0x268
    ctx->pc = 0x2a7028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 616));
    // 0x2a702c: 0xc0a9c7c  jal         func_2A71F0
    ctx->pc = 0x2A702Cu;
    SET_GPR_U32(ctx, 31, 0x2A7034u);
    ctx->pc = 0x2A7030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A702Cu;
    // 0x2a7030: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A71F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A71F0u, 0x2A702Cu, 0x2A7034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7034u;
label_2a7034:
    // 0x2a7034: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A7034u;
    {
        const bool branch_taken_0x2a7034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7034u;
        // 0x2a7038: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7034) {
            ctx->pc = 0x2A707Cu;
            goto label_2a707c;
        }
    }
    ctx->pc = 0x2A703Cu;
label_2a703c:
    // 0x2a703c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2a703cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2a7040: 0x90432397  lbu         $v1, 0x2397($v0)
    ctx->pc = 0x2a7040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x4C2397u));
    // 0x2a7044: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A7044u;
    {
        const bool branch_taken_0x2a7044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7044u;
        // 0x2a7048: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7044) {
            ctx->pc = 0x2A707Cu;
            goto label_2a707c;
        }
    }
    ctx->pc = 0x2A704Cu;
    // 0x2a704c: 0x24840268  addiu       $a0, $a0, 0x268
    ctx->pc = 0x2a704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 616));
    // 0x2a7050: 0xc0a9ca2  jal         func_2A7288
    ctx->pc = 0x2A7050u;
    SET_GPR_U32(ctx, 31, 0x2A7058u);
    ctx->pc = 0x2A7054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7050u;
    // 0x2a7054: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7288u, 0x2A7050u, 0x2A7058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7058u;
label_2a7058:
    // 0x2a7058: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7058u;
    {
        const bool branch_taken_0x2a7058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7058u;
        // 0x2a705c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7058) {
            ctx->pc = 0x2A707Cu;
            goto label_2a707c;
        }
    }
    ctx->pc = 0x2A7060u;
label_2a7060:
    // 0x2a7060: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2a7060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2a7064: 0x90432398  lbu         $v1, 0x2398($v0)
    ctx->pc = 0x2a7064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x4C2398u));
    // 0x2a7068: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7068u;
    {
        const bool branch_taken_0x2a7068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7068u;
        // 0x2a706c: 0x24840268  addiu       $a0, $a0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7068) {
            ctx->pc = 0x2A707Cu;
            goto label_2a707c;
        }
    }
    ctx->pc = 0x2A7070u;
    // 0x2a7070: 0xc0a9cc6  jal         func_2A7318
    ctx->pc = 0x2A7070u;
    SET_GPR_U32(ctx, 31, 0x2A7078u);
    ctx->pc = 0x2A7074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7070u;
    // 0x2a7074: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7318u, 0x2A7070u, 0x2A7078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7078u;
label_2a7078:
    // 0x2a7078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a707c:
    // 0x2a707c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A707Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A707Cu;
        // 0x2a7080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A707Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7084u;
    // 0x2a7084: 0x0  nop
    ctx->pc = 0x2a7084u;
    // NOP
    ctx->pc = 0x2a7088u;
}
