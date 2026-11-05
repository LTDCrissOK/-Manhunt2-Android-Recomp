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

// Function: sub_00309488
// Address: 0x309488 - 0x3095a0
void sub_00309488_0x309488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309488_0x309488");
#endif

    switch (ctx->pc) {
        case 0x3094b4u: goto label_3094b4;
        case 0x3094c4u: goto label_3094c4;
        case 0x3094d4u: goto label_3094d4;
        case 0x3094e0u: goto label_3094e0;
        case 0x3094ecu: goto label_3094ec;
        case 0x309504u: goto label_309504;
        case 0x309514u: goto label_309514;
        case 0x309520u: goto label_309520;
        case 0x30952cu: goto label_30952c;
        case 0x309544u: goto label_309544;
        case 0x309554u: goto label_309554;
        case 0x309564u: goto label_309564;
        case 0x309574u: goto label_309574;
        case 0x309584u: goto label_309584;
        default: break;
    }

    ctx->pc = 0x309488u;

    // 0x309488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x309488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30948c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x309490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x309494: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x309494u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x309498: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x309498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30949c: 0x26102150  addiu       $s0, $s0, 0x2150
    ctx->pc = 0x30949cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8528));
    // 0x3094a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3094a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3094a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3094a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3094a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3094ac: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x3094ACu;
    SET_GPR_U32(ctx, 31, 0x3094B4u);
    ctx->pc = 0x3094B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094ACu;
    // 0x3094b0: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x3094ACu, 0x3094B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094B4u;
label_3094b4:
    // 0x3094b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3094b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3094b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094bc: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x3094BCu;
    SET_GPR_U32(ctx, 31, 0x3094C4u);
    ctx->pc = 0x3094C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094BCu;
    // 0x3094c0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x3094BCu, 0x3094C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094C4u;
label_3094c4:
    // 0x3094c4: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x3094c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3094c8: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x3094c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x3094cc: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x3094CCu;
    SET_GPR_U32(ctx, 31, 0x3094D4u);
    ctx->pc = 0x3094D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094CCu;
    // 0x3094d0: 0x26102160  addiu       $s0, $s0, 0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x3094CCu, 0x3094D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094D4u;
label_3094d4:
    // 0x3094d4: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x3094d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3094d8: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x3094D8u;
    SET_GPR_U32(ctx, 31, 0x3094E0u);
    ctx->pc = 0x3094DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094D8u;
    // 0x3094dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x3094D8u, 0x3094E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094E0u;
label_3094e0:
    // 0x3094e0: 0xc64c0018  lwc1        $f12, 0x18($s2)
    ctx->pc = 0x3094e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3094e4: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x3094E4u;
    SET_GPR_U32(ctx, 31, 0x3094ECu);
    ctx->pc = 0x3094E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094E4u;
    // 0x3094e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x3094E4u, 0x3094ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094ECu;
label_3094ec:
    // 0x3094ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3094ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3094f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3094f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094f8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3094f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094fc: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x3094FCu;
    SET_GPR_U32(ctx, 31, 0x309504u);
    ctx->pc = 0x309500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094FCu;
    // 0x309500: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x3094FCu, 0x309504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309504u;
label_309504:
    // 0x309504: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x309504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309508: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x309508u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x30950c: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x30950Cu;
    SET_GPR_U32(ctx, 31, 0x309514u);
    ctx->pc = 0x309510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30950Cu;
    // 0x309510: 0x26312178  addiu       $s1, $s1, 0x2178 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x30950Cu, 0x309514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309514u;
label_309514:
    // 0x309514: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x309514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309518: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x309518u;
    SET_GPR_U32(ctx, 31, 0x309520u);
    ctx->pc = 0x30951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309518u;
    // 0x30951c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x309518u, 0x309520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309520u;
label_309520:
    // 0x309520: 0xc64c0028  lwc1        $f12, 0x28($s2)
    ctx->pc = 0x309520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309524: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x309524u;
    SET_GPR_U32(ctx, 31, 0x30952Cu);
    ctx->pc = 0x309528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309524u;
    // 0x309528: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x309524u, 0x30952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30952Cu;
label_30952c:
    // 0x30952c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x30952cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309530: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x309530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309534: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x309534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309538: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x309538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30953c: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x30953Cu;
    SET_GPR_U32(ctx, 31, 0x309544u);
    ctx->pc = 0x309540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30953Cu;
    // 0x309540: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x30953Cu, 0x309544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309544u;
label_309544:
    // 0x309544: 0xc64c0038  lwc1        $f12, 0x38($s2)
    ctx->pc = 0x309544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309548: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x309548u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x30954c: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x30954Cu;
    SET_GPR_U32(ctx, 31, 0x309554u);
    ctx->pc = 0x309550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30954Cu;
    // 0x309550: 0x26102190  addiu       $s0, $s0, 0x2190 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x30954Cu, 0x309554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309554u;
label_309554:
    // 0x309554: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x309554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309558: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x309558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30955c: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x30955Cu;
    SET_GPR_U32(ctx, 31, 0x309564u);
    ctx->pc = 0x309560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30955Cu;
    // 0x309560: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x30955Cu, 0x309564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309564u;
label_309564:
    // 0x309564: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x309564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309568: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x309568u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x30956c: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x30956Cu;
    SET_GPR_U32(ctx, 31, 0x309574u);
    ctx->pc = 0x309570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30956Cu;
    // 0x309570: 0x261021a0  addiu       $s0, $s0, 0x21A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x30956Cu, 0x309574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309574u;
label_309574:
    // 0x309574: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x309574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309578: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x309578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30957c: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x30957Cu;
    SET_GPR_U32(ctx, 31, 0x309584u);
    ctx->pc = 0x309580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30957Cu;
    // 0x309580: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x30957Cu, 0x309584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309584u;
label_309584:
    // 0x309584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x309588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30958c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30958cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309590: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x309590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x309594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309598: 0x3e00008  jr          $ra
    ctx->pc = 0x309598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309598u;
        // 0x30959c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3095A0u;
}
