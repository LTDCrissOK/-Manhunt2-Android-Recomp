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

// Function: sub_00143F58
// Address: 0x143f58 - 0x143fc0
void sub_00143F58_0x143f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143F58_0x143f58");
#endif

    switch (ctx->pc) {
        case 0x143f74u: goto label_143f74;
        case 0x143f80u: goto label_143f80;
        case 0x143f94u: goto label_143f94;
        case 0x143f9cu: goto label_143f9c;
        case 0x143facu: goto label_143fac;
        default: break;
    }

    ctx->pc = 0x143f58u;

    // 0x143f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143f5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x143f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143f60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143f64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x143f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x143f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f6c: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x143F6Cu;
    SET_GPR_U32(ctx, 31, 0x143F74u);
    ctx->pc = 0x143F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F6Cu;
    // 0x143f70: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x143F6Cu, 0x143F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F74u;
label_143f74:
    // 0x143f74: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x143f74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x143f78: 0xc04d930  jal         func_1364C0
    ctx->pc = 0x143F78u;
    SET_GPR_U32(ctx, 31, 0x143F80u);
    ctx->pc = 0x143F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F78u;
    // 0x143f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364C0u, 0x143F78u, 0x143F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F80u;
label_143f80:
    // 0x143f80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x143F80u;
    {
        const bool branch_taken_0x143f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143f80) {
            ctx->pc = 0x143FA4u;
            goto label_143fa4;
        }
    }
    ctx->pc = 0x143F88u;
    // 0x143f88: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x143f88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x143f8c: 0xc05107a  jal         func_1441E8
    ctx->pc = 0x143F8Cu;
    SET_GPR_U32(ctx, 31, 0x143F94u);
    ctx->pc = 0x143F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F8Cu;
    // 0x143f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1441E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1441E8u, 0x143F8Cu, 0x143F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F94u;
label_143f94:
    // 0x143f94: 0xc0510f8  jal         func_1443E0
    ctx->pc = 0x143F94u;
    SET_GPR_U32(ctx, 31, 0x143F9Cu);
    ctx->pc = 0x143F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F94u;
    // 0x143f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1443E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1443E0u, 0x143F94u, 0x143F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F9Cu;
label_143f9c:
    // 0x143f9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143F9Cu;
    {
        const bool branch_taken_0x143f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F9Cu;
        // 0x143fa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f9c) {
            ctx->pc = 0x143FB0u;
            goto label_143fb0;
        }
    }
    ctx->pc = 0x143FA4u;
label_143fa4:
    // 0x143fa4: 0xc051098  jal         func_144260
    ctx->pc = 0x143FA4u;
    SET_GPR_U32(ctx, 31, 0x143FACu);
    ctx->pc = 0x143FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143FA4u;
    // 0x143fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144260u, 0x143FA4u, 0x143FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143FACu;
label_143fac:
    // 0x143fac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143fb0:
    // 0x143fb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x143fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x143FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FB4u;
        // 0x143fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143FBCu;
    // 0x143fbc: 0x0  nop
    ctx->pc = 0x143fbcu;
    // NOP
    ctx->pc = 0x143fc0u;
}
