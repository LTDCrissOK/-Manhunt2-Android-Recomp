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

// Function: sub_00392978
// Address: 0x392978 - 0x392ac0
void sub_00392978_0x392978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392978_0x392978");
#endif

    switch (ctx->pc) {
        case 0x3929f8u: goto label_3929f8;
        case 0x392a60u: goto label_392a60;
        default: break;
    }

    ctx->pc = 0x392978u;

    // 0x392978: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x392978u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x39297c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39297cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392980: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x392980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x392984: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x392984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x392988: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x392988u;
    {
        const bool branch_taken_0x392988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x392988) {
            ctx->pc = 0x3929A0u;
            goto label_3929a0;
        }
    }
    ctx->pc = 0x392990u;
    // 0x392990: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x392990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x392994: 0x3e00008  jr          $ra
    ctx->pc = 0x392994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392994u;
        // 0x392998: 0x460c0000  add.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39299Cu;
    // 0x39299c: 0x0  nop
    ctx->pc = 0x39299cu;
    // NOP
label_3929a0:
    // 0x3929a0: 0x1ca0000e  bgtz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x3929A0u;
    {
        const bool branch_taken_0x3929a0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x3929A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929A0u;
        // 0x3929a4: 0x535c3  sra         $a2, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3929a0) {
            ctx->pc = 0x3929DCu;
            goto label_3929dc;
        }
    }
    ctx->pc = 0x3929A8u;
    // 0x3929a8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3929a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3929ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3929acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3929b0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3929b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3929b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3929B4u;
    {
        const bool branch_taken_0x3929b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3929B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929B4u;
        // 0x3929b8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3929b4) {
            ctx->pc = 0x3929D4u;
            goto label_3929d4;
        }
    }
    ctx->pc = 0x3929BCu;
    // 0x3929bc: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3929BCu;
    {
        const bool branch_taken_0x3929bc = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x3929bc) {
            ctx->pc = 0x3929DCu;
            goto label_3929dc;
        }
    }
    ctx->pc = 0x3929C4u;
    // 0x3929c4: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x3929c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x3929c8: 0x0  nop
    ctx->pc = 0x3929c8u;
    // NOP
    // 0x3929cc: 0x0  nop
    ctx->pc = 0x3929ccu;
    // NOP
    // 0x3929d0: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x3929d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
label_3929d4:
    // 0x3929d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3929D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3929D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3929DCu;
label_3929dc:
    // 0x3929dc: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x3929DCu;
    {
        const bool branch_taken_0x3929dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3929E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929DCu;
        // 0x3929e0: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3929dc) {
            ctx->pc = 0x392A28u;
            goto label_392a28;
        }
    }
    ctx->pc = 0x3929E4u;
    // 0x3929e4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3929e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x3929e8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3929e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3929ec: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3929ECu;
    {
        const bool branch_taken_0x3929ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3929F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929ECu;
        // 0x3929f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3929ec) {
            ctx->pc = 0x392A1Cu;
            goto label_392a1c;
        }
    }
    ctx->pc = 0x3929F4u;
    // 0x3929f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3929f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3929f8:
    // 0x3929f8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3929f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3929fc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3929fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x392a00: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x392a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x392a04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x392a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x392a08: 0x0  nop
    ctx->pc = 0x392a08u;
    // NOP
    // 0x392a0c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x392A0Cu;
    {
        const bool branch_taken_0x392a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392a0c) {
            ctx->pc = 0x3929F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3929f8;
        }
    }
    ctx->pc = 0x392A14u;
    // 0x392a14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x392A14u;
    {
        const bool branch_taken_0x392a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A14u;
        // 0x392a18: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a14) {
            ctx->pc = 0x392A24u;
            goto label_392a24;
        }
    }
    ctx->pc = 0x392A1Cu;
label_392a1c:
    // 0x392a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x392a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x392a20: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x392a20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_392a24:
    // 0x392a24: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x392a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_392a28:
    // 0x392a28: 0x24c6ff81  addiu       $a2, $a2, -0x7F
    ctx->pc = 0x392a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x392a2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x392a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x392a30: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x392a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x392a34: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x392a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x392a38: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x392a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x392a3c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x392a3cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x392a40: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x392a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x392a44: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x392a44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x392a48: 0x645c0  sll         $t0, $a2, 23
    ctx->pc = 0x392a48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x392a4c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x392a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x392a50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x392a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392a54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x392a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392a58: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x392a58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x392a5c: 0x0  nop
    ctx->pc = 0x392a5cu;
    // NOP
label_392a60:
    // 0x392a60: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x392a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x392a64: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x392a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x392a68: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x392A68u;
    {
        const bool branch_taken_0x392a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392a68) {
            ctx->pc = 0x392A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392A68u;
            // 0x392a6c: 0x63042  srl         $a2, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392A80u;
            goto label_392a80;
        }
    }
    ctx->pc = 0x392A70u;
    // 0x392a70: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x392a70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x392a74: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x392a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x392a78: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x392a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x392a7c: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x392a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_392a80:
    // 0x392a80: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x392A80u;
    {
        const bool branch_taken_0x392a80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x392A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A80u;
        // 0x392a84: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a80) {
            ctx->pc = 0x392A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392a60;
        }
    }
    ctx->pc = 0x392A88u;
    // 0x392a88: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x392A88u;
    {
        const bool branch_taken_0x392a88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x392A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A88u;
        // 0x392a8c: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a88) {
            ctx->pc = 0x392A94u;
            goto label_392a94;
        }
    }
    ctx->pc = 0x392A90u;
    // 0x392a90: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x392a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_392a94:
    // 0x392a94: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x392a94u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x392a98: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x392a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x392a9c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x392a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x392aa0: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x392aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x392aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x392aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x392AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392AB0u;
    // 0x392ab0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x392ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x392ab4: 0x0  nop
    ctx->pc = 0x392ab4u;
    // NOP
    // 0x392ab8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x392ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x392abc: 0x0  nop
    ctx->pc = 0x392abcu;
    // NOP
    ctx->pc = 0x392ac0u;
}
