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

// Function: sub_001C9A08
// Address: 0x1c9a08 - 0x1c9b28
void sub_001C9A08_0x1c9a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9A08_0x1c9a08");
#endif

    switch (ctx->pc) {
        case 0x1c9a28u: goto label_1c9a28;
        default: break;
    }

    ctx->pc = 0x1c9a08u;

    // 0x1c9a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9a10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9a14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c9a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9a1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c9a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a20: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1C9A20u;
    SET_GPR_U32(ctx, 31, 0x1C9A28u);
    ctx->pc = 0x1C9A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A20u;
    // 0x1c9a24: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1C9A20u, 0x1C9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A28u;
label_1c9a28:
    // 0x1c9a28: 0x2443ffd8  addiu       $v1, $v0, -0x28
    ctx->pc = 0x1c9a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1c9a2c: 0x2c62005c  sltiu       $v0, $v1, 0x5C
    ctx->pc = 0x1c9a2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)92) ? 1 : 0);
    // 0x1c9a30: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C9A30u;
    {
        const bool branch_taken_0x1c9a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A30u;
        // 0x1c9a34: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a30) {
            ctx->pc = 0x1C9AF8u;
            goto label_1c9af8;
        }
    }
    ctx->pc = 0x1C9A38u;
    // 0x1c9a38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9a3c: 0x2442c770  addiu       $v0, $v0, -0x3890
    ctx->pc = 0x1c9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952816));
    // 0x1c9a40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c9a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c9a44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c9a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9a48: 0x800008  jr          $a0
    ctx->pc = 0x1C9A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9A50u: goto label_1c9a50;
            case 0x1C9A68u: goto label_1c9a68;
            case 0x1C9A80u: goto label_1c9a80;
            case 0x1C9A98u: goto label_1c9a98;
            case 0x1C9AB0u: goto label_1c9ab0;
            case 0x1C9AC8u: goto label_1c9ac8;
            case 0x1C9AE0u: goto label_1c9ae0;
            case 0x1C9AF8u: goto label_1c9af8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C9A50u;
label_1c9a50:
    // 0x1c9a50: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x1c9a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
    // 0x1c9a54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a58: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1c9a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1c9a5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9a60: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1C9A60u;
    {
        const bool branch_taken_0x1c9a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A60u;
        // 0x1c9a64: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a60) {
            ctx->pc = 0x1C9B0Cu;
            goto label_1c9b0c;
        }
    }
    ctx->pc = 0x1C9A68u;
label_1c9a68:
    // 0x1c9a68: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1c9a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1c9a6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a70: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1c9a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1c9a74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9a78: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1C9A78u;
    {
        const bool branch_taken_0x1c9a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A78u;
        // 0x1c9a7c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a78) {
            ctx->pc = 0x1C9B0Cu;
            goto label_1c9b0c;
        }
    }
    ctx->pc = 0x1C9A80u;
label_1c9a80:
    // 0x1c9a80: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1c9a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1c9a84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a88: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1c9a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1c9a8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9a90: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1C9A90u;
    {
        const bool branch_taken_0x1c9a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A90u;
        // 0x1c9a94: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a90) {
            ctx->pc = 0x1C9B0Cu;
            goto label_1c9b0c;
        }
    }
    ctx->pc = 0x1C9A98u;
label_1c9a98:
    // 0x1c9a98: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x1c9a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
    // 0x1c9a9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9aa0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x1c9aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x1c9aa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9aa8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C9AA8u;
    {
        const bool branch_taken_0x1c9aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AA8u;
        // 0x1c9aac: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9aa8) {
            ctx->pc = 0x1C9B0Cu;
            goto label_1c9b0c;
        }
    }
    ctx->pc = 0x1C9AB0u;
label_1c9ab0:
    // 0x1c9ab0: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1c9ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1c9ab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ab8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1c9ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1c9abc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9ac0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C9AC0u;
    {
        const bool branch_taken_0x1c9ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AC0u;
        // 0x1c9ac4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ac0) {
            ctx->pc = 0x1C9B0Cu;
            goto label_1c9b0c;
        }
    }
    ctx->pc = 0x1C9AC8u;
label_1c9ac8:
    // 0x1c9ac8: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x1c9ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
    // 0x1c9acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ad0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1c9ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1c9ad4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9ad8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C9AD8u;
    {
        const bool branch_taken_0x1c9ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AD8u;
        // 0x1c9adc: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ad8) {
            ctx->pc = 0x1C9B0Cu;
            goto label_1c9b0c;
        }
    }
    ctx->pc = 0x1C9AE0u;
label_1c9ae0:
    // 0x1c9ae0: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1c9ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1c9ae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ae8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1c9ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1c9aec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9af0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9AF0u;
    {
        const bool branch_taken_0x1c9af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AF0u;
        // 0x1c9af4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9af0) {
            ctx->pc = 0x1C9B0Cu;
            goto label_1c9b0c;
        }
    }
    ctx->pc = 0x1C9AF8u;
label_1c9af8:
    // 0x1c9af8: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1c9af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1c9afc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9b00: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1c9b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1c9b04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9b08: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c9b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1c9b0c:
    // 0x1c9b0c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1c9b0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1c9b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B1Cu;
        // 0x1c9b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B24u;
    // 0x1c9b24: 0x0  nop
    ctx->pc = 0x1c9b24u;
    // NOP
    ctx->pc = 0x1c9b28u;
}
