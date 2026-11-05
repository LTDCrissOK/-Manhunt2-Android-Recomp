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

// Function: sub_00393BA8
// Address: 0x393ba8 - 0x393d10
void sub_00393BA8_0x393ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393BA8_0x393ba8");
#endif

    switch (ctx->pc) {
        case 0x393cc4u: goto label_393cc4;
        default: break;
    }

    ctx->pc = 0x393ba8u;

    // 0x393ba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x393ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x393bac: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x393bacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x393bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x393bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x393bb4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x393bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393bb8: 0x3c077f80  lui         $a3, 0x7F80
    ctx->pc = 0x393bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32640 << 16));
    // 0x393bbc: 0xc71024  and         $v0, $a2, $a3
    ctx->pc = 0x393bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x393bc0: 0x21dc3  sra         $v1, $v0, 23
    ctx->pc = 0x393bc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 23));
    // 0x393bc4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x393BC4u;
    {
        const bool branch_taken_0x393bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x393BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BC4u;
        // 0x393bc8: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x393bc4) {
            ctx->pc = 0x393C38u;
            goto label_393c38;
        }
    }
    ctx->pc = 0x393BCCu;
    // 0x393bcc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x393bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x393bd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x393bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x393bd4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x393bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x393bd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x393BD8u;
    {
        const bool branch_taken_0x393bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BD8u;
        // 0x393bdc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393bd8) {
            ctx->pc = 0x393BF0u;
            goto label_393bf0;
        }
    }
    ctx->pc = 0x393BE0u;
    // 0x393be0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x393be0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x393be4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x393BE4u;
    {
        const bool branch_taken_0x393be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393BE4u;
        // 0x393be8: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x393be4) {
            ctx->pc = 0x393D00u;
            goto label_393d00;
        }
    }
    ctx->pc = 0x393BECu;
    // 0x393bec: 0x0  nop
    ctx->pc = 0x393becu;
    // NOP
label_393bf0:
    // 0x393bf0: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x393bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x393bf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x393bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x393bf8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x393bf8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x393bfc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x393bfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x393c00: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x393c00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x393c04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x393c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393c08: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x393c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x393c0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x393c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x393c10: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x393c10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x393c14: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x393c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x393c18: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x393c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x393c1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x393C1Cu;
    {
        const bool branch_taken_0x393c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C1Cu;
        // 0x393c20: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c1c) {
            ctx->pc = 0x393C38u;
            goto label_393c38;
        }
    }
    ctx->pc = 0x393C24u;
    // 0x393c24: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x393c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x393c28: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x393c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x393c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x393c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x393c30: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x393C30u;
    {
        const bool branch_taken_0x393c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C30u;
        // 0x393c34: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c30) {
            ctx->pc = 0x393CF8u;
            goto label_393cf8;
        }
    }
    ctx->pc = 0x393C38u;
label_393c38:
    // 0x393c38: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x393c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x393c3c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x393C3Cu;
    {
        const bool branch_taken_0x393c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x393C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C3Cu;
        // 0x393c40: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c3c) {
            ctx->pc = 0x393C50u;
            goto label_393c50;
        }
    }
    ctx->pc = 0x393C44u;
    // 0x393c44: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x393c44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x393c48: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x393C48u;
    {
        const bool branch_taken_0x393c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C48u;
        // 0x393c4c: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c48) {
            ctx->pc = 0x393CF8u;
            goto label_393cf8;
        }
    }
    ctx->pc = 0x393C50u;
label_393c50:
    // 0x393c50: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x393c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x393c54: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x393C54u;
    {
        const bool branch_taken_0x393c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393c54) {
            ctx->pc = 0x393CACu;
            goto label_393cac;
        }
    }
    ctx->pc = 0x393C5Cu;
    // 0x393c5c: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x393C5Cu;
    {
        const bool branch_taken_0x393c5c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x393C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C5Cu;
        // 0x393c60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c5c) {
            ctx->pc = 0x393C88u;
            goto label_393c88;
        }
    }
    ctx->pc = 0x393C64u;
    // 0x393c64: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x393c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x393c68: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x393c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x393c6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x393c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x393c70: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x393c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x393c74: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x393c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x393c78: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x393c78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x393c7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x393C7Cu;
    {
        const bool branch_taken_0x393c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C7Cu;
        // 0x393c80: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c7c) {
            ctx->pc = 0x393D00u;
            goto label_393d00;
        }
    }
    ctx->pc = 0x393C84u;
    // 0x393c84: 0x0  nop
    ctx->pc = 0x393c84u;
    // NOP
label_393c88:
    // 0x393c88: 0x2862ffe8  slti        $v0, $v1, -0x18
    ctx->pc = 0x393c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967272) ? 1 : 0);
    // 0x393c8c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x393C8Cu;
    {
        const bool branch_taken_0x393c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C8Cu;
        // 0x393c90: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c8c) {
            ctx->pc = 0x393CCCu;
            goto label_393ccc;
        }
    }
    ctx->pc = 0x393C94u;
    // 0x393c94: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x393c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x393c98: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x393c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x393c9c: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x393c9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x393ca0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x393ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x393ca4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x393CA4u;
    {
        const bool branch_taken_0x393ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393ca4) {
            ctx->pc = 0x393CB8u;
            goto label_393cb8;
        }
    }
    ctx->pc = 0x393CACu;
label_393cac:
    // 0x393cac: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x393cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x393cb0: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x393cb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x393cb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x393cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_393cb8:
    // 0x393cb8: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x393cb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x393cbc: 0xc0e4f44  jal         func_393D10
    ctx->pc = 0x393CBCu;
    SET_GPR_U32(ctx, 31, 0x393CC4u);
    ctx->pc = 0x393CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393CBCu;
    // 0x393cc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393D10u, 0x393CBCu, 0x393CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393CC4u;
label_393cc4:
    // 0x393cc4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x393CC4u;
    {
        const bool branch_taken_0x393cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CC4u;
        // 0x393cc8: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393cc4) {
            ctx->pc = 0x393CF8u;
            goto label_393cf8;
        }
    }
    ctx->pc = 0x393CCCu;
label_393ccc:
    // 0x393ccc: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x393cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x393cd0: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x393cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x393cd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x393cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x393cd8: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x393cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x393cdc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x393cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x393ce0: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x393ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x393ce4: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x393ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x393ce8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x393ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x393cec: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x393cecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x393cf0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x393cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x393cf4: 0x0  nop
    ctx->pc = 0x393cf4u;
    // NOP
label_393cf8:
    // 0x393cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x393cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393cfc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x393cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_393d00:
    // 0x393d00: 0x3e00008  jr          $ra
    ctx->pc = 0x393D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D00u;
        // 0x393d04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393D08u;
    // 0x393d08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x393d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393d0c: 0x0  nop
    ctx->pc = 0x393d0cu;
    // NOP
    ctx->pc = 0x393d10u;
}
