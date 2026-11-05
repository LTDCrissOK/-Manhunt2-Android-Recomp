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

// Function: sub_003DEF08
// Address: 0x3def08 - 0x3deff8
void sub_003DEF08_0x3def08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEF08_0x3def08");
#endif

    switch (ctx->pc) {
        case 0x3def2cu: goto label_3def2c;
        case 0x3def38u: goto label_3def38;
        case 0x3def44u: goto label_3def44;
        case 0x3def50u: goto label_3def50;
        case 0x3def5cu: goto label_3def5c;
        case 0x3def68u: goto label_3def68;
        case 0x3def80u: goto label_3def80;
        case 0x3def8cu: goto label_3def8c;
        case 0x3def98u: goto label_3def98;
        case 0x3defa4u: goto label_3defa4;
        case 0x3defb8u: goto label_3defb8;
        default: break;
    }

    ctx->pc = 0x3def08u;

    // 0x3def08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3def08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3def0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3def0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3def10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3def10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3def14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3def14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3def18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3def18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3def1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3def1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3def20: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x3def20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x3def24: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEF24u;
    SET_GPR_U32(ctx, 31, 0x3DEF2Cu);
    ctx->pc = 0x3DEF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF24u;
    // 0x3def28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEF24u, 0x3DEF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF2Cu;
label_3def2c:
    // 0x3def2c: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x3def2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x3def30: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEF30u;
    SET_GPR_U32(ctx, 31, 0x3DEF38u);
    ctx->pc = 0x3DEF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF30u;
    // 0x3def34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEF30u, 0x3DEF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF38u;
label_3def38:
    // 0x3def38: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x3def38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x3def3c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEF3Cu;
    SET_GPR_U32(ctx, 31, 0x3DEF44u);
    ctx->pc = 0x3DEF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF3Cu;
    // 0x3def40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEF3Cu, 0x3DEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF44u;
label_3def44:
    // 0x3def44: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x3def44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x3def48: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEF48u;
    SET_GPR_U32(ctx, 31, 0x3DEF50u);
    ctx->pc = 0x3DEF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF48u;
    // 0x3def4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEF48u, 0x3DEF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF50u;
label_3def50:
    // 0x3def50: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x3def50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x3def54: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEF54u;
    SET_GPR_U32(ctx, 31, 0x3DEF5Cu);
    ctx->pc = 0x3DEF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF54u;
    // 0x3def58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEF54u, 0x3DEF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF5Cu;
label_3def5c:
    // 0x3def5c: 0x2624002c  addiu       $a0, $s1, 0x2C
    ctx->pc = 0x3def5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x3def60: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEF60u;
    SET_GPR_U32(ctx, 31, 0x3DEF68u);
    ctx->pc = 0x3DEF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF60u;
    // 0x3def64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEF60u, 0x3DEF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF68u;
label_3def68:
    // 0x3def68: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3def68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3def6c: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x3def6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x3def70: 0x24421830  addiu       $v0, $v0, 0x1830
    ctx->pc = 0x3def70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6192));
    // 0x3def74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3def74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3def78: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEF78u;
    SET_GPR_U32(ctx, 31, 0x3DEF80u);
    ctx->pc = 0x3DEF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF78u;
    // 0x3def7c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEF78u, 0x3DEF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF80u;
label_3def80:
    // 0x3def80: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x3def80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3def84: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEF84u;
    SET_GPR_U32(ctx, 31, 0x3DEF8Cu);
    ctx->pc = 0x3DEF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF84u;
    // 0x3def88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEF84u, 0x3DEF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF8Cu;
label_3def8c:
    // 0x3def8c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x3def8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3def90: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEF90u;
    SET_GPR_U32(ctx, 31, 0x3DEF98u);
    ctx->pc = 0x3DEF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF90u;
    // 0x3def94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEF90u, 0x3DEF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF98u;
label_3def98:
    // 0x3def98: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3def98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3def9c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEF9Cu;
    SET_GPR_U32(ctx, 31, 0x3DEFA4u);
    ctx->pc = 0x3DEFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF9Cu;
    // 0x3defa0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEF9Cu, 0x3DEFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEFA4u;
label_3defa4:
    // 0x3defa4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3defa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3defa8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DEFA8u;
    {
        const bool branch_taken_0x3defa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEFA8u;
        // 0x3defac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3defa8) {
            ctx->pc = 0x3DEFBCu;
            goto label_3defbc;
        }
    }
    ctx->pc = 0x3DEFB0u;
    // 0x3defb0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DEFB0u;
    SET_GPR_U32(ctx, 31, 0x3DEFB8u);
    ctx->pc = 0x3DEFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEFB0u;
    // 0x3defb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DEFB0u, 0x3DEFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEFB8u;
label_3defb8:
    // 0x3defb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3defb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3defbc:
    // 0x3defbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3defbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3defc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3defc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3defc4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DEFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEFC4u;
        // 0x3defc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DEFCCu;
    // 0x3defcc: 0x0  nop
    ctx->pc = 0x3defccu;
    // NOP
    // 0x3defd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3defd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3defd4: 0x0  nop
    ctx->pc = 0x3defd4u;
    // NOP
    // 0x3defd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3defd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3defdc: 0x0  nop
    ctx->pc = 0x3defdcu;
    // NOP
    // 0x3defe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3defe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3defe4: 0x0  nop
    ctx->pc = 0x3defe4u;
    // NOP
    // 0x3defe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3defe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3defec: 0x0  nop
    ctx->pc = 0x3defecu;
    // NOP
    // 0x3deff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3deff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deff4: 0x0  nop
    ctx->pc = 0x3deff4u;
    // NOP
    ctx->pc = 0x3deff8u;
}
