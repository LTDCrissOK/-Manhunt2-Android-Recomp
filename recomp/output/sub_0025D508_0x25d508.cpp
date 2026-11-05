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

// Function: sub_0025D508
// Address: 0x25d508 - 0x25d5f8
void sub_0025D508_0x25d508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D508_0x25d508");
#endif

    switch (ctx->pc) {
        case 0x25d528u: goto label_25d528;
        case 0x25d540u: goto label_25d540;
        case 0x25d55cu: goto label_25d55c;
        case 0x25d578u: goto label_25d578;
        case 0x25d594u: goto label_25d594;
        case 0x25d5b8u: goto label_25d5b8;
        case 0x25d5c8u: goto label_25d5c8;
        case 0x25d5d8u: goto label_25d5d8;
        default: break;
    }

    ctx->pc = 0x25d508u;

    // 0x25d508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d50c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25d50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25d510: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25d510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d514: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25d518: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25d518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25d51c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x25d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x25d520: 0xc0b5ec8  jal         func_2D7B20
    ctx->pc = 0x25D520u;
    SET_GPR_U32(ctx, 31, 0x25D528u);
    ctx->pc = 0x25D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D520u;
    // 0x25d524: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B20u, 0x25D520u, 0x25D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D528u;
label_25d528:
    // 0x25d528: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x25d528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x25d52c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25d52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25d530: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25d530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d534: 0x24a55958  addiu       $a1, $a1, 0x5958
    ctx->pc = 0x25d534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22872));
    // 0x25d538: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x25D538u;
    SET_GPR_U32(ctx, 31, 0x25D540u);
    ctx->pc = 0x25D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D538u;
    // 0x25d53c: 0x90660001  lbu         $a2, 0x1($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x25D538u, 0x25D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D540u;
label_25d540:
    // 0x25d540: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x25d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x25d544: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25d544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25d548: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25d548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d54c: 0x24a55968  addiu       $a1, $a1, 0x5968
    ctx->pc = 0x25d54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22888));
    // 0x25d550: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x25d550u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25d554: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x25D554u;
    SET_GPR_U32(ctx, 31, 0x25D55Cu);
    ctx->pc = 0x25D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D554u;
    // 0x25d558: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x25D554u, 0x25D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D55Cu;
label_25d55c:
    // 0x25d55c: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x25d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x25d560: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25d560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25d564: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25d564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d568: 0x24a55978  addiu       $a1, $a1, 0x5978
    ctx->pc = 0x25d568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22904));
    // 0x25d56c: 0xc46c0024  lwc1        $f12, 0x24($v1)
    ctx->pc = 0x25d56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d570: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x25D570u;
    SET_GPR_U32(ctx, 31, 0x25D578u);
    ctx->pc = 0x25D574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D570u;
    // 0x25d574: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x25D570u, 0x25D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D578u;
label_25d578:
    // 0x25d578: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x25d578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x25d57c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25d57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25d580: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25d580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d584: 0x24a55988  addiu       $a1, $a1, 0x5988
    ctx->pc = 0x25d584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22920));
    // 0x25d588: 0xc46c0028  lwc1        $f12, 0x28($v1)
    ctx->pc = 0x25d588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d58c: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x25D58Cu;
    SET_GPR_U32(ctx, 31, 0x25D594u);
    ctx->pc = 0x25D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D58Cu;
    // 0x25d590: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x25D58Cu, 0x25D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D594u;
label_25d594:
    // 0x25d594: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x25d594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x25d598: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x25d598u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x25d59c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x25d59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x25d5a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25d5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d5a4: 0x26105998  addiu       $s0, $s0, 0x5998
    ctx->pc = 0x25d5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22936));
    // 0x25d5a8: 0xc46c0030  lwc1        $f12, 0x30($v1)
    ctx->pc = 0x25d5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d5ac: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x25d5acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25d5b0: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x25D5B0u;
    SET_GPR_U32(ctx, 31, 0x25D5B8u);
    ctx->pc = 0x25D5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D5B0u;
    // 0x25d5b4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x25D5B0u, 0x25D5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5B8u;
label_25d5b8:
    // 0x25d5b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25d5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25d5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5c0: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x25D5C0u;
    SET_GPR_U32(ctx, 31, 0x25D5C8u);
    ctx->pc = 0x25D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D5C0u;
    // 0x25d5c4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x25D5C0u, 0x25D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5C8u;
label_25d5c8:
    // 0x25d5c8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x25d5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25d5cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5d0: 0xc0b5ecc  jal         func_2D7B30
    ctx->pc = 0x25D5D0u;
    SET_GPR_U32(ctx, 31, 0x25D5D8u);
    ctx->pc = 0x25D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D5D0u;
    // 0x25d5d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B30u, 0x25D5D0u, 0x25D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5D8u;
label_25d5d8:
    // 0x25d5d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25d5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25d5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d5e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x25d5e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d5e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25d5e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d5e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x25d5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25d5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x25D5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5ECu;
        // 0x25d5f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D5F4u;
    // 0x25d5f4: 0x0  nop
    ctx->pc = 0x25d5f4u;
    // NOP
    ctx->pc = 0x25d5f8u;
}
