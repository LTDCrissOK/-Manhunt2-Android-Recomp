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

// Function: sub_00391BD8
// Address: 0x391bd8 - 0x391d08
void sub_00391BD8_0x391bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391BD8_0x391bd8");
#endif

    switch (ctx->pc) {
        case 0x391cc0u: goto label_391cc0;
        default: break;
    }

    ctx->pc = 0x391bd8u;

    // 0x391bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x391bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x391bdc: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x391bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x391be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x391be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x391be4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x391be4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x391be8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x391be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391bec: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x391becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x391bf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391bf4: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x391bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x391bf8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x391BF8u;
    {
        const bool branch_taken_0x391bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391BF8u;
        // 0x391bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391bf8) {
            ctx->pc = 0x391C60u;
            goto label_391c60;
        }
    }
    ctx->pc = 0x391C00u;
    // 0x391c00: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x391c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x391c04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391c08: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x391c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x391c0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x391C0Cu;
    {
        const bool branch_taken_0x391c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C0Cu;
        // 0x391c10: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c0c) {
            ctx->pc = 0x391C20u;
            goto label_391c20;
        }
    }
    ctx->pc = 0x391C14u;
    // 0x391c14: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x391C14u;
    {
        const bool branch_taken_0x391c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C14u;
        // 0x391c18: 0xc4409e34  lwc1        $f0, -0x61CC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c14) {
            ctx->pc = 0x391CF8u;
            goto label_391cf8;
        }
    }
    ctx->pc = 0x391C1Cu;
    // 0x391c1c: 0x0  nop
    ctx->pc = 0x391c1cu;
    // NOP
label_391c20:
    // 0x391c20: 0x4c10009  bgez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x391C20u;
    {
        const bool branch_taken_0x391c20 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x391C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C20u;
        // 0x391c24: 0x2405ffe7  addiu       $a1, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c20) {
            ctx->pc = 0x391C48u;
            goto label_391c48;
        }
    }
    ctx->pc = 0x391C28u;
    // 0x391c28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x391c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391c2c: 0x46000041  sub.s       $f1, $f0, $f0
    ctx->pc = 0x391c2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[0]);
    // 0x391c30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x391c30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391c34: 0x0  nop
    ctx->pc = 0x391c34u;
    // NOP
    // 0x391c38: 0x0  nop
    ctx->pc = 0x391c38u;
    // NOP
    // 0x391c3c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x391c3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x391c40: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x391C40u;
    {
        const bool branch_taken_0x391c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C40u;
        // 0x391c44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c40) {
            ctx->pc = 0x391CFCu;
            goto label_391cfc;
        }
    }
    ctx->pc = 0x391C48u;
label_391c48:
    // 0x391c48: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x391c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x391c4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391c50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x391c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391c54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x391c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x391c58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x391c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x391c5c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x391c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_391c60:
    // 0x391c60: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x391c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x391c64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391c68: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x391c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x391c6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x391C6Cu;
    {
        const bool branch_taken_0x391c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C6Cu;
        // 0x391c70: 0x24a4ff81  addiu       $a0, $a1, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c6c) {
            ctx->pc = 0x391C80u;
            goto label_391c80;
        }
    }
    ctx->pc = 0x391C74u;
    // 0x391c74: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x391c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x391c78: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x391C78u;
    {
        const bool branch_taken_0x391c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C78u;
        // 0x391c7c: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c78) {
            ctx->pc = 0x391CF8u;
            goto label_391cf8;
        }
    }
    ctx->pc = 0x391C80u;
label_391c80:
    // 0x391c80: 0x615c3  sra         $v0, $a2, 23
    ctx->pc = 0x391c80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 23));
    // 0x391c84: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x391c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x391c88: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x391c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x391c8c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x391c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x391c90: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x391c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x391c94: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x391c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x391c98: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x391c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x391c9c: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x391c9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x391ca0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x391ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x391ca4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391ca8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x391ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x391cac: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x391cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x391cb0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x391cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x391cb4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x391cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x391cb8: 0xc0e462c  jal         func_3918B0
    ctx->pc = 0x391CB8u;
    SET_GPR_U32(ctx, 31, 0x391CC0u);
    ctx->pc = 0x3918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3918B0u, 0x391CB8u, 0x391CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391CC0u;
label_391cc0:
    // 0x391cc0: 0x3c013554  lui         $at, 0x3554
    ctx->pc = 0x391cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13652 << 16));
    // 0x391cc4: 0x342127db  ori         $at, $at, 0x27DB
    ctx->pc = 0x391cc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10203);
    // 0x391cc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x391cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391ccc: 0x3c013ede  lui         $at, 0x3EDE
    ctx->pc = 0x391cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16094 << 16));
    // 0x391cd0: 0x34215bd9  ori         $at, $at, 0x5BD9
    ctx->pc = 0x391cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23513);
    // 0x391cd4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x391cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x391cd8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x391cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x391cdc: 0x3c013e9a  lui         $at, 0x3E9A
    ctx->pc = 0x391cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16026 << 16));
    // 0x391ce0: 0x34212080  ori         $at, $at, 0x2080
    ctx->pc = 0x391ce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8320);
    // 0x391ce4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x391ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x391ce8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x391ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x391cec: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x391cecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x391cf0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x391cf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x391cf4: 0x46140800  add.s       $f0, $f1, $f20
    ctx->pc = 0x391cf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_391cf8:
    // 0x391cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x391cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_391cfc:
    // 0x391cfc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x391cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x391d00: 0x3e00008  jr          $ra
    ctx->pc = 0x391D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D00u;
        // 0x391d04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391D08u;
}
