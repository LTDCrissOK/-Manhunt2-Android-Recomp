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

// Function: sub_0038EE78
// Address: 0x38ee78 - 0x38efd0
void sub_0038EE78_0x38ee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EE78_0x38ee78");
#endif

    switch (ctx->pc) {
        case 0x38eeb0u: goto label_38eeb0;
        case 0x38eec0u: goto label_38eec0;
        case 0x38eed4u: goto label_38eed4;
        case 0x38eee0u: goto label_38eee0;
        case 0x38eee8u: goto label_38eee8;
        case 0x38eef4u: goto label_38eef4;
        case 0x38ef10u: goto label_38ef10;
        case 0x38ef54u: goto label_38ef54;
        case 0x38ef64u: goto label_38ef64;
        case 0x38ef74u: goto label_38ef74;
        case 0x38ef8cu: goto label_38ef8c;
        default: break;
    }

    ctx->pc = 0x38ee78u;

    // 0x38ee78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x38ee78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x38ee7c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x38ee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x38ee80: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x38ee80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x38ee84: 0x241701b3  addiu       $s7, $zero, 0x1B3
    ctx->pc = 0x38ee84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x38ee88: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x38ee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x38ee8c: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x38ee8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38ee90: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x38ee90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x38ee94: 0x24150100  addiu       $s5, $zero, 0x100
    ctx->pc = 0x38ee94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x38ee98: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x38ee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x38ee9c: 0x241401b7  addiu       $s4, $zero, 0x1B7
    ctx->pc = 0x38ee9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x38eea0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x38eea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x38eea4: 0x241301b8  addiu       $s3, $zero, 0x1B8
    ctx->pc = 0x38eea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x38eea8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x38eea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x38eeac: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x38eeacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38eeb0:
    // 0x38eeb0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x38eeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x38eeb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38eeb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eeb8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x38eeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x38eebc: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x38eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_38eec0:
    // 0x38eec0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x38EEC0u;
    {
        const bool branch_taken_0x38eec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EEC0u;
        // 0x38eec4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eec0) {
            ctx->pc = 0x38EFA0u;
            goto label_38efa0;
        }
    }
    ctx->pc = 0x38EEC8u;
    // 0x38eec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38eec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eecc: 0xc0e3bf6  jal         func_38EFD8
    ctx->pc = 0x38EECCu;
    SET_GPR_U32(ctx, 31, 0x38EED4u);
    ctx->pc = 0x38EED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EECCu;
    // 0x38eed0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EFD8u, 0x38EECCu, 0x38EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EED4u;
label_38eed4:
    // 0x38eed4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38EED4u;
    {
        const bool branch_taken_0x38eed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EED4u;
        // 0x38eed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eed4) {
            ctx->pc = 0x38EEECu;
            goto label_38eeec;
        }
    }
    ctx->pc = 0x38EEDCu;
    // 0x38eedc: 0x0  nop
    ctx->pc = 0x38eedcu;
    // NOP
label_38eee0:
    // 0x38eee0: 0xc0e3b9c  jal         func_38EE70
    ctx->pc = 0x38EEE0u;
    SET_GPR_U32(ctx, 31, 0x38EEE8u);
    ctx->pc = 0x38EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EEE0u;
    // 0x38eee4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE70u, 0x38EEE0u, 0x38EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EEE8u;
label_38eee8:
    // 0x38eee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38eee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38eeec:
    // 0x38eeec: 0xc0e32f8  jal         func_38CBE0
    ctx->pc = 0x38EEECu;
    SET_GPR_U32(ctx, 31, 0x38EEF4u);
    ctx->pc = 0x38EEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EEECu;
    // 0x38eef0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CBE0u, 0x38EEECu, 0x38EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EEF4u;
label_38eef4:
    // 0x38eef4: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38EEF4u;
    {
        const bool branch_taken_0x38eef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x38EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EEF4u;
        // 0x38eef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eef4) {
            ctx->pc = 0x38EF08u;
            goto label_38ef08;
        }
    }
    ctx->pc = 0x38EEFCu;
    // 0x38eefc: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x38eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x38ef00: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x38EF00u;
    {
        const bool branch_taken_0x38ef00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ef00) {
            ctx->pc = 0x38EEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38eee0;
        }
    }
    ctx->pc = 0x38EF08u;
label_38ef08:
    // 0x38ef08: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EF08u;
    SET_GPR_U32(ctx, 31, 0x38EF10u);
    ctx->pc = 0x38EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EF08u;
    // 0x38ef0c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EF08u, 0x38EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EF10u;
label_38ef10:
    // 0x38ef10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38ef10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ef14: 0x1077000d  beq         $v1, $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x38EF14u;
    {
        const bool branch_taken_0x38ef14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x38EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF14u;
        // 0x38ef18: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef14) {
            ctx->pc = 0x38EF4Cu;
            goto label_38ef4c;
        }
    }
    ctx->pc = 0x38EF1Cu;
    // 0x38ef1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38EF1Cu;
    {
        const bool branch_taken_0x38ef1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ef1c) {
            ctx->pc = 0x38EF34u;
            goto label_38ef34;
        }
    }
    ctx->pc = 0x38EF24u;
    // 0x38ef24: 0x10750011  beq         $v1, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x38EF24u;
    {
        const bool branch_taken_0x38ef24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x38ef24) {
            ctx->pc = 0x38EF6Cu;
            goto label_38ef6c;
        }
    }
    ctx->pc = 0x38EF2Cu;
    // 0x38ef2c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x38EF2Cu;
    {
        const bool branch_taken_0x38ef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF2Cu;
        // 0x38ef30: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef2c) {
            ctx->pc = 0x38EEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38eec0;
        }
    }
    ctx->pc = 0x38EF34u;
label_38ef34:
    // 0x38ef34: 0x1074001a  beq         $v1, $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x38EF34u;
    {
        const bool branch_taken_0x38ef34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x38EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF34u;
        // 0x38ef38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef34) {
            ctx->pc = 0x38EFA0u;
            goto label_38efa0;
        }
    }
    ctx->pc = 0x38EF3Cu;
    // 0x38ef3c: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x38EF3Cu;
    {
        const bool branch_taken_0x38ef3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x38ef3c) {
            ctx->pc = 0x38EF5Cu;
            goto label_38ef5c;
        }
    }
    ctx->pc = 0x38EF44u;
    // 0x38ef44: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x38EF44u;
    {
        const bool branch_taken_0x38ef44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF44u;
        // 0x38ef48: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef44) {
            ctx->pc = 0x38EEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38eec0;
        }
    }
    ctx->pc = 0x38EF4Cu;
label_38ef4c:
    // 0x38ef4c: 0xc0e38e0  jal         func_38E380
    ctx->pc = 0x38EF4Cu;
    SET_GPR_U32(ctx, 31, 0x38EF54u);
    ctx->pc = 0x38EF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EF4Cu;
    // 0x38ef50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E380u, 0x38EF4Cu, 0x38EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EF54u;
label_38ef54:
    // 0x38ef54: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x38EF54u;
    {
        const bool branch_taken_0x38ef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF54u;
        // 0x38ef58: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef54) {
            ctx->pc = 0x38EEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38eec0;
        }
    }
    ctx->pc = 0x38EF5Cu;
label_38ef5c:
    // 0x38ef5c: 0xc0e398c  jal         func_38E630
    ctx->pc = 0x38EF5Cu;
    SET_GPR_U32(ctx, 31, 0x38EF64u);
    ctx->pc = 0x38EF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EF5Cu;
    // 0x38ef60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E630u, 0x38EF5Cu, 0x38EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EF64u;
label_38ef64:
    // 0x38ef64: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x38EF64u;
    {
        const bool branch_taken_0x38ef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF64u;
        // 0x38ef68: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef64) {
            ctx->pc = 0x38EEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38eec0;
        }
    }
    ctx->pc = 0x38EF6Cu;
label_38ef6c:
    // 0x38ef6c: 0xc0e39b4  jal         func_38E6D0
    ctx->pc = 0x38EF6Cu;
    SET_GPR_U32(ctx, 31, 0x38EF74u);
    ctx->pc = 0x38EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EF6Cu;
    // 0x38ef70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E6D0u, 0x38EF6Cu, 0x38EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EF74u;
label_38ef74:
    // 0x38ef74: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x38ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x38ef78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38ef78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ef7c: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x38ef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x38ef80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x38ef80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x38ef84: 0xc0e180e  jal         func_386038
    ctx->pc = 0x38EF84u;
    SET_GPR_U32(ctx, 31, 0x38EF8Cu);
    ctx->pc = 0x38EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EF84u;
    // 0x38ef88: 0xffb20008  sd          $s2, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386038u, 0x38EF84u, 0x38EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EF8Cu;
label_38ef8c:
    // 0x38ef8c: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x38ef8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ef90: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x38ef90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x38ef94: 0xfe020840  sd          $v0, 0x840($s0)
    ctx->pc = 0x38ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2112), GPR_U64(ctx, 2));
    // 0x38ef98: 0xfe030838  sd          $v1, 0x838($s0)
    ctx->pc = 0x38ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2104), GPR_U64(ctx, 3));
    // 0x38ef9c: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x38ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_38efa0:
    // 0x38efa0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x38efa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38efa4: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x38efa4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38efa8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x38efa8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38efac: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x38efacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38efb0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x38efb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38efb4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x38efb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38efb8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x38efb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38efbc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x38efbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38efc0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x38efc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38efc4: 0x3e00008  jr          $ra
    ctx->pc = 0x38EFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFC4u;
        // 0x38efc8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EFCCu;
    // 0x38efcc: 0x0  nop
    ctx->pc = 0x38efccu;
    // NOP
    ctx->pc = 0x38efd0u;
}
