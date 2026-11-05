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

// Function: sub_001559C8
// Address: 0x1559c8 - 0x155ab0
void sub_001559C8_0x1559c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001559C8_0x1559c8");
#endif

    switch (ctx->pc) {
        case 0x155aa0u: goto label_155aa0;
        default: break;
    }

    ctx->pc = 0x1559c8u;

    // 0x1559c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1559c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1559cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1559ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1559d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1559d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1559d4: 0x8ce50664  lw          $a1, 0x664($a3)
    ctx->pc = 0x1559d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1636)));
    // 0x1559d8: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1559D8u;
    {
        const bool branch_taken_0x1559d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559D8u;
        // 0x1559dc: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559d8) {
            ctx->pc = 0x155A4Cu;
            goto label_155a4c;
        }
    }
    ctx->pc = 0x1559E0u;
    // 0x1559e0: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x1559e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x1559e4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1559e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1559e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1559e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1559ec: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1559ECu;
    {
        const bool branch_taken_0x1559ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1559F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559ECu;
        // 0x1559f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559ec) {
            ctx->pc = 0x155AA0u;
            goto label_155aa0;
        }
    }
    ctx->pc = 0x1559F4u;
    // 0x1559f4: 0x24a80258  addiu       $t0, $a1, 0x258
    ctx->pc = 0x1559f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 600));
    // 0x1559f8: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x1559f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1559fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1559FCu;
    {
        const bool branch_taken_0x1559fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x155A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559FCu;
        // 0x155a00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559fc) {
            ctx->pc = 0x155A18u;
            goto label_155a18;
        }
    }
    ctx->pc = 0x155A04u;
    // 0x155a04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x155a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x155a08: 0x0  nop
    ctx->pc = 0x155a08u;
    // NOP
    // 0x155a0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x155a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x155a10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x155A10u;
    {
        const bool branch_taken_0x155a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155a10) {
            ctx->pc = 0x155A30u;
            goto label_155a30;
        }
    }
    ctx->pc = 0x155A18u;
label_155a18:
    // 0x155a18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x155a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x155a1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x155a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x155a20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x155a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x155a24: 0x0  nop
    ctx->pc = 0x155a24u;
    // NOP
    // 0x155a28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x155a28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x155a2c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x155a2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_155a30:
    // 0x155a30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x155a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x155a34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x155a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155a38: 0x0  nop
    ctx->pc = 0x155a38u;
    // NOP
    // 0x155a3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x155a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155a40: 0x0  nop
    ctx->pc = 0x155a40u;
    // NOP
    // 0x155a44: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x155A44u;
    {
        const bool branch_taken_0x155a44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155a44) {
            ctx->pc = 0x155A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155A44u;
            // 0x155a48: 0x90e3046c  lbu         $v1, 0x46C($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155A54u;
            goto label_155a54;
        }
    }
    ctx->pc = 0x155A4Cu;
label_155a4c:
    // 0x155a4c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x155A4Cu;
    {
        const bool branch_taken_0x155a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A4Cu;
        // 0x155a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a4c) {
            ctx->pc = 0x155AA0u;
            goto label_155aa0;
        }
    }
    ctx->pc = 0x155A54u;
label_155a54:
    // 0x155a54: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x155a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x155a58: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x155a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x155a5c: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x155a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x155a60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155a64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x155a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x155a68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155a6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x155a70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x155a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x155a74: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x155a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x155a78: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x155a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x155a7c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x155a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x155a80: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x155a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x155a84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155A84u;
    {
        const bool branch_taken_0x155a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A84u;
        // 0x155a88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a84) {
            ctx->pc = 0x155A94u;
            goto label_155a94;
        }
    }
    ctx->pc = 0x155A8Cu;
    // 0x155a8c: 0x8c62107c  lw          $v0, 0x107C($v1)
    ctx->pc = 0x155a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4220)));
    // 0x155a90: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x155a90u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_155a94:
    // 0x155a94: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x155a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a98: 0xc04e450  jal         func_139140
    ctx->pc = 0x155A98u;
    SET_GPR_U32(ctx, 31, 0x155AA0u);
    ctx->pc = 0x155A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A98u;
    // 0x155a9c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139140u, 0x155A98u, 0x155AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155AA0u;
label_155aa0:
    // 0x155aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x155AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AA4u;
        // 0x155aa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155AACu;
    // 0x155aac: 0x0  nop
    ctx->pc = 0x155aacu;
    // NOP
    ctx->pc = 0x155ab0u;
}
