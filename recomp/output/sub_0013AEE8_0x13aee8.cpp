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

// Function: sub_0013AEE8
// Address: 0x13aee8 - 0x13afd8
void sub_0013AEE8_0x13aee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AEE8_0x13aee8");
#endif

    switch (ctx->pc) {
        case 0x13afbcu: goto label_13afbc;
        default: break;
    }

    ctx->pc = 0x13aee8u;

    // 0x13aee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13aee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13aeec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x13aeecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aef0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13aef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13aef4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13aef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13aef8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13aef8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13aefc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x13aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x13af00: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x13af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x13af04: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x13af04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x13af08: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13af08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13af0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13af10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13af10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13af14: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13af18: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x13af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x13af1c: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x13AF1Cu;
    {
        const bool branch_taken_0x13af1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af1c) {
            ctx->pc = 0x13AF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AF1Cu;
            // 0x13af20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AFC8u;
            goto label_13afc8;
        }
    }
    ctx->pc = 0x13AF24u;
    // 0x13af24: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x13af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13af28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13af28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13af2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13af30: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x13af30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13af34: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AF34u;
    {
        const bool branch_taken_0x13af34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13af34) {
            ctx->pc = 0x13AF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AF34u;
            // 0x13af38: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AF44u;
            goto label_13af44;
        }
    }
    ctx->pc = 0x13AF3Cu;
    // 0x13af3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13AF3Cu;
    {
        const bool branch_taken_0x13af3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF3Cu;
        // 0x13af40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af3c) {
            ctx->pc = 0x13AF4Cu;
            goto label_13af4c;
        }
    }
    ctx->pc = 0x13AF44u;
label_13af44:
    // 0x13af44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13af44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13af48: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x13af48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_13af4c:
    // 0x13af4c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x13AF4Cu;
    {
        const bool branch_taken_0x13af4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF4Cu;
        // 0x13af50: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af4c) {
            ctx->pc = 0x13AFC4u;
            goto label_13afc4;
        }
    }
    ctx->pc = 0x13AF54u;
    // 0x13af54: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13af54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13af58: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x13af58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x13af5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13af5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13af60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13af60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af64: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x13af64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13af68: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x13af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13af6c: 0x8ce20ab4  lw          $v0, 0xAB4($a3)
    ctx->pc = 0x13af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2740)));
    // 0x13af70: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x13af70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13af74: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x13af74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x13af78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13af78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af7c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x13af7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13af80: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x13af80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x13af84: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x13af84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13af88: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x13af88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13af8c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x13af8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x13af90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13af90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13af94: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x13af94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x13af98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x13af98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13af9c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x13af9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x13afa0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x13afa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x13afa4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13afa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13afa8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x13afa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x13afac: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x13afacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13afb0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x13afb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x13afb4: 0xc041032  jal         func_1040C8
    ctx->pc = 0x13AFB4u;
    SET_GPR_U32(ctx, 31, 0x13AFBCu);
    ctx->pc = 0x13AFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AFB4u;
    // 0x13afb8: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x13AFB4u, 0x13AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AFBCu;
label_13afbc:
    // 0x13afbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13AFBCu;
    {
        const bool branch_taken_0x13afbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFBCu;
        // 0x13afc0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afbc) {
            ctx->pc = 0x13AFC8u;
            goto label_13afc8;
        }
    }
    ctx->pc = 0x13AFC4u;
label_13afc4:
    // 0x13afc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13afc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13afc8:
    // 0x13afc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13afc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13afcc: 0x3e00008  jr          $ra
    ctx->pc = 0x13AFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFCCu;
        // 0x13afd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AFD4u;
    // 0x13afd4: 0x0  nop
    ctx->pc = 0x13afd4u;
    // NOP
    ctx->pc = 0x13afd8u;
}
