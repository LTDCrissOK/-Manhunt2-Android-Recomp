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

// Function: sub_00130EF0
// Address: 0x130ef0 - 0x130f98
void sub_00130EF0_0x130ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130EF0_0x130ef0");
#endif

    switch (ctx->pc) {
        case 0x130f44u: goto label_130f44;
        case 0x130f54u: goto label_130f54;
        case 0x130f64u: goto label_130f64;
        case 0x130f74u: goto label_130f74;
        case 0x130f84u: goto label_130f84;
        default: break;
    }

    ctx->pc = 0x130ef0u;

    // 0x130ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130ef4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x130ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x130efc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x130efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x130f00: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x130f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130f04: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x130F04u;
    {
        const bool branch_taken_0x130f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F04u;
        // 0x130f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f04) {
            ctx->pc = 0x130F8Cu;
            goto label_130f8c;
        }
    }
    ctx->pc = 0x130F0Cu;
    // 0x130f0c: 0x2ca20013  sltiu       $v0, $a1, 0x13
    ctx->pc = 0x130f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x130f10: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x130F10u;
    {
        const bool branch_taken_0x130f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F10u;
        // 0x130f14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f10) {
            ctx->pc = 0x130F88u;
            goto label_130f88;
        }
    }
    ctx->pc = 0x130F18u;
    // 0x130f18: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x130f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x130f1c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x130f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x130f20: 0x2442dde0  addiu       $v0, $v0, -0x2220
    ctx->pc = 0x130f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958560));
    // 0x130f24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x130f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130f28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x130f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130f2c: 0x800008  jr          $a0
    ctx->pc = 0x130F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130F34u: goto label_130f34;
            case 0x130F3Cu: goto label_130f3c;
            case 0x130F4Cu: goto label_130f4c;
            case 0x130F5Cu: goto label_130f5c;
            case 0x130F6Cu: goto label_130f6c;
            case 0x130F7Cu: goto label_130f7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130F2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x130F34u;
label_130f34:
    // 0x130f34: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x130F34u;
    {
        const bool branch_taken_0x130f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F34u;
        // 0x130f38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f34) {
            ctx->pc = 0x130F88u;
            goto label_130f88;
        }
    }
    ctx->pc = 0x130F3Cu;
label_130f3c:
    // 0x130f3c: 0xc04c558  jal         func_131560
    ctx->pc = 0x130F3Cu;
    SET_GPR_U32(ctx, 31, 0x130F44u);
    ctx->pc = 0x130F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F3Cu;
    // 0x130f40: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x130F3Cu, 0x130F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F44u;
label_130f44:
    // 0x130f44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x130F44u;
    {
        const bool branch_taken_0x130f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F44u;
        // 0x130f48: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f44) {
            ctx->pc = 0x130F88u;
            goto label_130f88;
        }
    }
    ctx->pc = 0x130F4Cu;
label_130f4c:
    // 0x130f4c: 0xc04c55a  jal         func_131568
    ctx->pc = 0x130F4Cu;
    SET_GPR_U32(ctx, 31, 0x130F54u);
    ctx->pc = 0x130F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F4Cu;
    // 0x130f50: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131568u, 0x130F4Cu, 0x130F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F54u;
label_130f54:
    // 0x130f54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x130F54u;
    {
        const bool branch_taken_0x130f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F54u;
        // 0x130f58: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f54) {
            ctx->pc = 0x130F88u;
            goto label_130f88;
        }
    }
    ctx->pc = 0x130F5Cu;
label_130f5c:
    // 0x130f5c: 0xc04c524  jal         func_131490
    ctx->pc = 0x130F5Cu;
    SET_GPR_U32(ctx, 31, 0x130F64u);
    ctx->pc = 0x130F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F5Cu;
    // 0x130f60: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131490u, 0x130F5Cu, 0x130F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F64u;
label_130f64:
    // 0x130f64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x130F64u;
    {
        const bool branch_taken_0x130f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F64u;
        // 0x130f68: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f64) {
            ctx->pc = 0x130F88u;
            goto label_130f88;
        }
    }
    ctx->pc = 0x130F6Cu;
label_130f6c:
    // 0x130f6c: 0xc04c534  jal         func_1314D0
    ctx->pc = 0x130F6Cu;
    SET_GPR_U32(ctx, 31, 0x130F74u);
    ctx->pc = 0x130F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F6Cu;
    // 0x130f70: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1314D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1314D0u, 0x130F6Cu, 0x130F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F74u;
label_130f74:
    // 0x130f74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x130F74u;
    {
        const bool branch_taken_0x130f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F74u;
        // 0x130f78: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f74) {
            ctx->pc = 0x130F88u;
            goto label_130f88;
        }
    }
    ctx->pc = 0x130F7Cu;
label_130f7c:
    // 0x130f7c: 0xc04c548  jal         func_131520
    ctx->pc = 0x130F7Cu;
    SET_GPR_U32(ctx, 31, 0x130F84u);
    ctx->pc = 0x130F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F7Cu;
    // 0x130f80: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131520u, 0x130F7Cu, 0x130F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F84u;
label_130f84:
    // 0x130f84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130f84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_130f88:
    // 0x130f88: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x130f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_130f8c:
    // 0x130f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130f90: 0x3e00008  jr          $ra
    ctx->pc = 0x130F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F90u;
        // 0x130f94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130F98u;
}
