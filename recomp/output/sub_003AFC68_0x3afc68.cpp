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

// Function: sub_003AFC68
// Address: 0x3afc68 - 0x3afce8
void sub_003AFC68_0x3afc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AFC68_0x3afc68");
#endif

    ctx->pc = 0x3afc68u;

    // 0x3afc68: 0x28a50012  slti        $a1, $a1, 0x12
    ctx->pc = 0x3afc68u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x3afc6c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3afc6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afc70: 0x14a0001b  bnez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3AFC70u;
    {
        const bool branch_taken_0x3afc70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC70u;
        // 0x3afc74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afc70) {
            ctx->pc = 0x3AFCE0u;
            goto label_3afce0;
        }
    }
    ctx->pc = 0x3AFC78u;
    // 0x3afc78: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x3afc78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3afc7c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3afc7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3afc80: 0x2408ff00  addiu       $t0, $zero, -0x100
    ctx->pc = 0x3afc80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3afc84: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x3afc84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3afc88: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3afc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3afc8c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3afc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3afc90: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3afc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3afc94: 0x14650012  bne         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AFC94u;
    {
        const bool branch_taken_0x3afc94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC94u;
        // 0x3afc98: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afc94) {
            ctx->pc = 0x3AFCE0u;
            goto label_3afce0;
        }
    }
    ctx->pc = 0x3AFC9Cu;
    // 0x3afc9c: 0x94e40002  lhu         $a0, 0x2($a3)
    ctx->pc = 0x3afc9cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3afca0: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x3afca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3afca4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3afca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3afca8: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x3afca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x3afcac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3afcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3afcb0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3afcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3afcb4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x3afcb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3afcb8: 0x2863000e  slti        $v1, $v1, 0xE
    ctx->pc = 0x3afcb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x3afcbc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AFCBCu;
    {
        const bool branch_taken_0x3afcbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFCBCu;
        // 0x3afcc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afcbc) {
            ctx->pc = 0x3AFCE0u;
            goto label_3afce0;
        }
    }
    ctx->pc = 0x3AFCC4u;
    // 0x3afcc4: 0x94e40010  lhu         $a0, 0x10($a3)
    ctx->pc = 0x3afcc4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3afcc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3afcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afccc: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x3afcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3afcd0: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x3afcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3afcd4: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x3afcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x3afcd8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3afcd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3afcdc: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x3afcdcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_3afce0:
    // 0x3afce0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFCE8u;
}
