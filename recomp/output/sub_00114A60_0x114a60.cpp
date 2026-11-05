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

// Function: sub_00114A60
// Address: 0x114a60 - 0x114b18
void sub_00114A60_0x114a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114A60_0x114a60");
#endif

    switch (ctx->pc) {
        case 0x114aa4u: goto label_114aa4;
        case 0x114ae4u: goto label_114ae4;
        case 0x114af4u: goto label_114af4;
        default: break;
    }

    ctx->pc = 0x114a60u;

    // 0x114a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x114a64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x114a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x114a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114a6c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x114a6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x114a70: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x114a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x114a74: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x114A74u;
    {
        const bool branch_taken_0x114a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x114A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A74u;
        // 0x114a78: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a74) {
            ctx->pc = 0x114AA4u;
            goto label_114aa4;
        }
    }
    ctx->pc = 0x114A7Cu;
    // 0x114a7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x114a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x114a80: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x114a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x114a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114a88: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x114a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x114a8c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x114A8Cu;
    {
        const bool branch_taken_0x114a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A8Cu;
        // 0x114a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a8c) {
            ctx->pc = 0x114B08u;
            goto label_114b08;
        }
    }
    ctx->pc = 0x114A94u;
    // 0x114a94: 0x8c85107c  lw          $a1, 0x107C($a0)
    ctx->pc = 0x114a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4220)));
    // 0x114a98: 0x38a20004  xori        $v0, $a1, 0x4
    ctx->pc = 0x114a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)4);
    // 0x114a9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114A9Cu;
    {
        const bool branch_taken_0x114a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A9Cu;
        // 0x114aa0: 0x38a20002  xori        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a9c) {
            ctx->pc = 0x114AACu;
            goto label_114aac;
        }
    }
    ctx->pc = 0x114AA4u;
label_114aa4:
    // 0x114aa4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x114AA4u;
    {
        const bool branch_taken_0x114aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AA4u;
        // 0x114aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114aa4) {
            ctx->pc = 0x114B08u;
            goto label_114b08;
        }
    }
    ctx->pc = 0x114AACu;
label_114aac:
    // 0x114aac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x114AACu;
    {
        const bool branch_taken_0x114aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AACu;
        // 0x114ab0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114aac) {
            ctx->pc = 0x114ADCu;
            goto label_114adc;
        }
    }
    ctx->pc = 0x114AB4u;
    // 0x114ab4: 0x8c8500c0  lw          $a1, 0xC0($a0)
    ctx->pc = 0x114ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x114ab8: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x114ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x114abc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114ABCu;
    {
        const bool branch_taken_0x114abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114ABCu;
        // 0x114ac0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114abc) {
            ctx->pc = 0x114AD0u;
            goto label_114ad0;
        }
    }
    ctx->pc = 0x114AC4u;
    // 0x114ac4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x114ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x114ac8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x114AC8u;
    {
        const bool branch_taken_0x114ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114ac8) {
            ctx->pc = 0x114AD4u;
            goto label_114ad4;
        }
    }
    ctx->pc = 0x114AD0u;
label_114ad0:
    // 0x114ad0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x114ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114ad4:
    // 0x114ad4: 0x1060fff3  beqz        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x114AD4u;
    {
        const bool branch_taken_0x114ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AD4u;
        // 0x114ad8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ad4) {
            ctx->pc = 0x114AA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114aa4;
        }
    }
    ctx->pc = 0x114ADCu;
label_114adc:
    // 0x114adc: 0xc095368  jal         func_254DA0
    ctx->pc = 0x114ADCu;
    SET_GPR_U32(ctx, 31, 0x114AE4u);
    ctx->pc = 0x114AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114ADCu;
    // 0x114ae0: 0xc45489d0  lwc1        $f20, -0x7630($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x114ADCu, 0x114AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AE4u;
label_114ae4:
    // 0x114ae4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x114AE4u;
    {
        const bool branch_taken_0x114ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114ae4) {
            ctx->pc = 0x114AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114AE4u;
            // 0x114ae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114B08u;
            goto label_114b08;
        }
    }
    ctx->pc = 0x114AECu;
    // 0x114aec: 0xc04193c  jal         func_1064F0
    ctx->pc = 0x114AECu;
    SET_GPR_U32(ctx, 31, 0x114AF4u);
    ctx->pc = 0x114AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114AECu;
    // 0x114af0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1064F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064F0u, 0x114AECu, 0x114AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AF4u;
label_114af4:
    // 0x114af4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x114af4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114af8: 0x0  nop
    ctx->pc = 0x114af8u;
    // NOP
    // 0x114afc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x114AFCu;
    {
        const bool branch_taken_0x114afc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x114B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AFCu;
        // 0x114b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114afc) {
            ctx->pc = 0x114B08u;
            goto label_114b08;
        }
    }
    ctx->pc = 0x114B04u;
    // 0x114b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114b08:
    // 0x114b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114b0c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x114b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x114b10: 0x3e00008  jr          $ra
    ctx->pc = 0x114B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B10u;
        // 0x114b14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114B18u;
}
