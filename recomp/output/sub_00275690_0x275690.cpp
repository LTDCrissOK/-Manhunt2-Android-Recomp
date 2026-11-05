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

// Function: sub_00275690
// Address: 0x275690 - 0x275740
void sub_00275690_0x275690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275690_0x275690");
#endif

    switch (ctx->pc) {
        case 0x2756bcu: goto label_2756bc;
        case 0x2756d8u: goto label_2756d8;
        case 0x2756f4u: goto label_2756f4;
        default: break;
    }

    ctx->pc = 0x275690u;

    // 0x275690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275694: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x275694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x275698: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x275698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27569c: 0x24a58180  addiu       $a1, $a1, -0x7E80
    ctx->pc = 0x27569cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934912));
    // 0x2756a0: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2756a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2756a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2756a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2756a8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2756a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2756ac: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2756acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2756b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2756b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2756b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2756B4u;
    SET_GPR_U32(ctx, 31, 0x2756BCu);
    ctx->pc = 0x2756B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2756B4u;
    // 0x2756b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2756B4u, 0x2756BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2756BCu;
label_2756bc:
    // 0x2756bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2756bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2756c0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2756C0u;
    {
        const bool branch_taken_0x2756c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2756C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756C0u;
        // 0x2756c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756c0) {
            ctx->pc = 0x275700u;
            goto label_275700;
        }
    }
    ctx->pc = 0x2756C8u;
    // 0x2756c8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2756c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2756cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2756ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2756d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2756D0u;
    SET_GPR_U32(ctx, 31, 0x2756D8u);
    ctx->pc = 0x2756D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2756D0u;
    // 0x2756d4: 0x24a58188  addiu       $a1, $a1, -0x7E78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2756D0u, 0x2756D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2756D8u;
label_2756d8:
    // 0x2756d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2756d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2756dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2756DCu;
    {
        const bool branch_taken_0x2756dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2756E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756DCu;
        // 0x2756e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756dc) {
            ctx->pc = 0x275700u;
            goto label_275700;
        }
    }
    ctx->pc = 0x2756E4u;
    // 0x2756e4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2756e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2756e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2756e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2756ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2756ECu;
    SET_GPR_U32(ctx, 31, 0x2756F4u);
    ctx->pc = 0x2756F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2756ECu;
    // 0x2756f0: 0x24a58190  addiu       $a1, $a1, -0x7E70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2756ECu, 0x2756F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2756F4u;
label_2756f4:
    // 0x2756f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2756f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2756f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2756F8u;
    {
        const bool branch_taken_0x2756f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2756FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756F8u;
        // 0x2756fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756f8) {
            ctx->pc = 0x275724u;
            goto label_275724;
        }
    }
    ctx->pc = 0x275700u;
label_275700:
    // 0x275700: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x275700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x275704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x275704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275708: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x275708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x27570c: 0x24429e08  addiu       $v0, $v0, -0x61F8
    ctx->pc = 0x27570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942216));
    // 0x275710: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x275710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275714: 0x24849e18  addiu       $a0, $a0, -0x61E8
    ctx->pc = 0x275714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942232));
    // 0x275718: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27571c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x27571cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x275720: 0xe4750000  swc1        $f21, 0x0($v1)
    ctx->pc = 0x275720u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_275724:
    // 0x275724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275728: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x275728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27572c: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x27572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x275730: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x275730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275734: 0x3e00008  jr          $ra
    ctx->pc = 0x275734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275734u;
        // 0x275738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27573Cu;
    // 0x27573c: 0x0  nop
    ctx->pc = 0x27573cu;
    // NOP
    ctx->pc = 0x275740u;
}
