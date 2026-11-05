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

// Function: sub_0028AAF0
// Address: 0x28aaf0 - 0x28ab88
void sub_0028AAF0_0x28aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AAF0_0x28aaf0");
#endif

    switch (ctx->pc) {
        case 0x28ab08u: goto label_28ab08;
        case 0x28ab1cu: goto label_28ab1c;
        case 0x28ab34u: goto label_28ab34;
        case 0x28ab54u: goto label_28ab54;
        case 0x28ab64u: goto label_28ab64;
        case 0x28ab6cu: goto label_28ab6c;
        default: break;
    }

    ctx->pc = 0x28aaf0u;

    // 0x28aaf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28aaf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28aaf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28aaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28aafc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28aafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28ab00: 0xc0db0cc  jal         func_36C330
    ctx->pc = 0x28AB00u;
    SET_GPR_U32(ctx, 31, 0x28AB08u);
    ctx->pc = 0x28AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB00u;
    // 0x28ab04: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C330u, 0x28AB00u, 0x28AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB08u;
label_28ab08:
    // 0x28ab08: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28ab08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28ab0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28ab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ab10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab14: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28AB14u;
    SET_GPR_U32(ctx, 31, 0x28AB1Cu);
    ctx->pc = 0x28AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB14u;
    // 0x28ab18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28AB14u, 0x28AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB1Cu;
label_28ab1c:
    // 0x28ab1c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28ab20: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28ab24: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28ab28: 0x24a5af58  addiu       $a1, $a1, -0x50A8
    ctx->pc = 0x28ab28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946648));
    // 0x28ab2c: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28AB2Cu;
    SET_GPR_U32(ctx, 31, 0x28AB34u);
    ctx->pc = 0x28AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB2Cu;
    // 0x28ab30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28AB2Cu, 0x28AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB34u;
label_28ab34:
    // 0x28ab34: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28ab34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ab38: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28ab38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28ab3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28ab3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab40: 0x9211043c  lbu         $s1, 0x43C($s0)
    ctx->pc = 0x28ab40u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1084)));
    // 0x28ab44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ab44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28ab48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab4c: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28AB4Cu;
    SET_GPR_U32(ctx, 31, 0x28AB54u);
    ctx->pc = 0x28AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB4Cu;
    // 0x28ab50: 0xa200043c  sb          $zero, 0x43C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1084), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28AB4Cu, 0x28AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB54u;
label_28ab54:
    // 0x28ab54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ab54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ab5c: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28AB5Cu;
    SET_GPR_U32(ctx, 31, 0x28AB64u);
    ctx->pc = 0x28AB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB5Cu;
    // 0x28ab60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28AB5Cu, 0x28AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB64u;
label_28ab64:
    // 0x28ab64: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28AB64u;
    SET_GPR_U32(ctx, 31, 0x28AB6Cu);
    ctx->pc = 0x28AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB64u;
    // 0x28ab68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28AB64u, 0x28AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB6Cu;
label_28ab6c:
    // 0x28ab6c: 0xa211043c  sb          $s1, 0x43C($s0)
    ctx->pc = 0x28ab6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1084), (uint8_t)GPR_U32(ctx, 17));
    // 0x28ab70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ab70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ab74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28ab74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28ab78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28ab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ab7c: 0x3e00008  jr          $ra
    ctx->pc = 0x28AB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB7Cu;
        // 0x28ab80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AB84u;
    // 0x28ab84: 0x0  nop
    ctx->pc = 0x28ab84u;
    // NOP
    ctx->pc = 0x28ab88u;
}
