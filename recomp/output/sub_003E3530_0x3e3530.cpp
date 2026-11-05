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

// Function: sub_003E3530
// Address: 0x3e3530 - 0x3e35d0
void sub_003E3530_0x3e3530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3530_0x3e3530");
#endif

    switch (ctx->pc) {
        case 0x3e3570u: goto label_3e3570;
        case 0x3e35a0u: goto label_3e35a0;
        case 0x3e35b0u: goto label_3e35b0;
        default: break;
    }

    ctx->pc = 0x3e3530u;

    // 0x3e3530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e3530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e3534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e3534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e3538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e3538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e353c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e353cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3540: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e3540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3544: 0x1211001a  beq         $s0, $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E3544u;
    {
        const bool branch_taken_0x3e3544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3E3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3544u;
        // 0x3e3548: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3544) {
            ctx->pc = 0x3E35B0u;
            goto label_3e35b0;
        }
    }
    ctx->pc = 0x3E354Cu;
    // 0x3e354c: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x3e354cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x3e3550: 0x2301823  subu        $v1, $s1, $s0
    ctx->pc = 0x3e3550u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3e3554: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3e3554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3e3558: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3e3558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3e355c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e355cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3560: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3e3560u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3e3564: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E3564u;
    {
        const bool branch_taken_0x3e3564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3E3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3564u;
        // 0x3e3568: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3564) {
            ctx->pc = 0x3E3588u;
            goto label_3e3588;
        }
    }
    ctx->pc = 0x3E356Cu;
    // 0x3e356c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e3570:
    // 0x3e3570: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3e3570u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3e3574: 0x0  nop
    ctx->pc = 0x3e3574u;
    // NOP
    // 0x3e3578: 0x0  nop
    ctx->pc = 0x3e3578u;
    // NOP
    // 0x3e357c: 0x0  nop
    ctx->pc = 0x3e357cu;
    // NOP
    // 0x3e3580: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E3580u;
    {
        const bool branch_taken_0x3e3580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3580u;
        // 0x3e3584: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3580) {
            ctx->pc = 0x3E3570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3570;
        }
    }
    ctx->pc = 0x3E3588u;
label_3e3588:
    // 0x3e3588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e358c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e358cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3590: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e3590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3594: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3e3594u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3e3598: 0xc0f8c00  jal         func_3E3000
    ctx->pc = 0x3E3598u;
    SET_GPR_U32(ctx, 31, 0x3E35A0u);
    ctx->pc = 0x3E359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3598u;
    // 0x3e359c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3000u, 0x3E3598u, 0x3E35A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E35A0u;
label_3e35a0:
    // 0x3e35a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e35a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e35a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e35a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e35a8: 0xc0f8d2c  jal         func_3E34B0
    ctx->pc = 0x3E35A8u;
    SET_GPR_U32(ctx, 31, 0x3E35B0u);
    ctx->pc = 0x3E35ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E35A8u;
    // 0x3e35ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E34B0u, 0x3E35A8u, 0x3E35B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E35B0u;
label_3e35b0:
    // 0x3e35b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e35b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e35b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e35b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e35b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e35b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e35bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E35BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E35BCu;
        // 0x3e35c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E35BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E35C4u;
    // 0x3e35c4: 0x0  nop
    ctx->pc = 0x3e35c4u;
    // NOP
    // 0x3e35c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e35c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e35cc: 0x0  nop
    ctx->pc = 0x3e35ccu;
    // NOP
    ctx->pc = 0x3e35d0u;
}
