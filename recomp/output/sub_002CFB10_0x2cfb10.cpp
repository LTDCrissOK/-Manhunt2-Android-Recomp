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

// Function: sub_002CFB10
// Address: 0x2cfb10 - 0x2cfc18
void sub_002CFB10_0x2cfb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFB10_0x2cfb10");
#endif

    switch (ctx->pc) {
        case 0x2cfb4cu: goto label_2cfb4c;
        case 0x2cfb64u: goto label_2cfb64;
        case 0x2cfb7cu: goto label_2cfb7c;
        case 0x2cfb94u: goto label_2cfb94;
        case 0x2cfbacu: goto label_2cfbac;
        case 0x2cfbc4u: goto label_2cfbc4;
        case 0x2cfbccu: goto label_2cfbcc;
        case 0x2cfbe8u: goto label_2cfbe8;
        default: break;
    }

    ctx->pc = 0x2cfb10u;

    // 0x2cfb10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cfb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cfb14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cfb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cfb18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cfb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cfb1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cfb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cfb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cfb24: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2cfb24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cfb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cfb2c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2cfb2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cfb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cfb34: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2cfb34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb38: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2cfb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2cfb3c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2cfb3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cfb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cfb44: 0xc0e14e4  jal         func_385390
    ctx->pc = 0x2CFB44u;
    SET_GPR_U32(ctx, 31, 0x2CFB4Cu);
    ctx->pc = 0x2CFB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB44u;
    // 0x2cfb48: 0x160a82d  daddu       $s5, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385390u, 0x2CFB44u, 0x2CFB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB4Cu;
label_2cfb4c:
    // 0x2cfb4c: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2cfb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2cfb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb54: 0x24c601c8  addiu       $a2, $a2, 0x1C8
    ctx->pc = 0x2cfb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 456));
    // 0x2cfb58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cfb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb5c: 0xc0e17fc  jal         func_385FF0
    ctx->pc = 0x2CFB5Cu;
    SET_GPR_U32(ctx, 31, 0x2CFB64u);
    ctx->pc = 0x2CFB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB5Cu;
    // 0x2cfb60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385FF0u, 0x2CFB5Cu, 0x2CFB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB64u;
label_2cfb64:
    // 0x2cfb64: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2cfb64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2cfb68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb6c: 0x24c601d0  addiu       $a2, $a2, 0x1D0
    ctx->pc = 0x2cfb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
    // 0x2cfb70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cfb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfb74: 0xc0e17fc  jal         func_385FF0
    ctx->pc = 0x2CFB74u;
    SET_GPR_U32(ctx, 31, 0x2CFB7Cu);
    ctx->pc = 0x2CFB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB74u;
    // 0x2cfb78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385FF0u, 0x2CFB74u, 0x2CFB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB7Cu;
label_2cfb7c:
    // 0x2cfb7c: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2cfb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2cfb80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb84: 0x24c60208  addiu       $a2, $a2, 0x208
    ctx->pc = 0x2cfb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 520));
    // 0x2cfb88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cfb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cfb8c: 0xc0e17fc  jal         func_385FF0
    ctx->pc = 0x2CFB8Cu;
    SET_GPR_U32(ctx, 31, 0x2CFB94u);
    ctx->pc = 0x2CFB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB8Cu;
    // 0x2cfb90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385FF0u, 0x2CFB8Cu, 0x2CFB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB94u;
label_2cfb94:
    // 0x2cfb94: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2cfb94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2cfb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb9c: 0x24c60238  addiu       $a2, $a2, 0x238
    ctx->pc = 0x2cfb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 568));
    // 0x2cfba0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2cfba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cfba4: 0xc0e17fc  jal         func_385FF0
    ctx->pc = 0x2CFBA4u;
    SET_GPR_U32(ctx, 31, 0x2CFBACu);
    ctx->pc = 0x2CFBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFBA4u;
    // 0x2cfba8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385FF0u, 0x2CFBA4u, 0x2CFBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFBACu;
label_2cfbac:
    // 0x2cfbac: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2cfbacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2cfbb0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2cfbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cfbb4: 0x24c60268  addiu       $a2, $a2, 0x268
    ctx->pc = 0x2cfbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 616));
    // 0x2cfbb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cfbb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfbbc: 0xc0e17fc  jal         func_385FF0
    ctx->pc = 0x2CFBBCu;
    SET_GPR_U32(ctx, 31, 0x2CFBC4u);
    ctx->pc = 0x2CFBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFBBCu;
    // 0x2cfbc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385FF0u, 0x2CFBBCu, 0x2CFBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFBC4u;
label_2cfbc4:
    // 0x2cfbc4: 0xc0b3f1e  jal         func_2CFC78
    ctx->pc = 0x2CFBC4u;
    SET_GPR_U32(ctx, 31, 0x2CFBCCu);
    ctx->pc = 0x2CFBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFBC4u;
    // 0x2cfbc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC78u, 0x2CFBC4u, 0x2CFBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFBCCu;
label_2cfbcc:
    // 0x2cfbcc: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x2cfbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x2cfbd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cfbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfbd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cfbd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfbd8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2cfbd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfbdc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2cfbdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfbe0: 0xc0b3b24  jal         func_2CEC90
    ctx->pc = 0x2CFBE0u;
    SET_GPR_U32(ctx, 31, 0x2CFBE8u);
    ctx->pc = 0x2CFBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFBE0u;
    // 0x2cfbe4: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEC90u, 0x2CFBE0u, 0x2CFBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFBE8u;
label_2cfbe8:
    // 0x2cfbe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cfbe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfbec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfbf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cfbf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cfbf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cfbf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfbf8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cfbf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cfbfc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cfbfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfc00: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cfc00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cfc04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cfc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cfc08: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC08u;
        // 0x2cfc0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFC10u;
    // 0x2cfc10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2cfc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cfc14: 0x0  nop
    ctx->pc = 0x2cfc14u;
    // NOP
    ctx->pc = 0x2cfc18u;
}
