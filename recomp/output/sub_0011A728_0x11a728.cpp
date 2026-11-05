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

// Function: sub_0011A728
// Address: 0x11a728 - 0x11a900
void sub_0011A728_0x11a728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A728_0x11a728");
#endif

    switch (ctx->pc) {
        case 0x11a790u: goto label_11a790;
        case 0x11a79cu: goto label_11a79c;
        case 0x11a7acu: goto label_11a7ac;
        case 0x11a7bcu: goto label_11a7bc;
        case 0x11a7ccu: goto label_11a7cc;
        case 0x11a7e0u: goto label_11a7e0;
        case 0x11a7e8u: goto label_11a7e8;
        case 0x11a7f4u: goto label_11a7f4;
        case 0x11a810u: goto label_11a810;
        case 0x11a820u: goto label_11a820;
        case 0x11a830u: goto label_11a830;
        case 0x11a844u: goto label_11a844;
        case 0x11a854u: goto label_11a854;
        case 0x11a868u: goto label_11a868;
        case 0x11a878u: goto label_11a878;
        case 0x11a88cu: goto label_11a88c;
        case 0x11a89cu: goto label_11a89c;
        case 0x11a8acu: goto label_11a8ac;
        case 0x11a8b8u: goto label_11a8b8;
        case 0x11a8c4u: goto label_11a8c4;
        case 0x11a8d0u: goto label_11a8d0;
        default: break;
    }

    ctx->pc = 0x11a728u;

    // 0x11a728: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11a728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11a72c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11a72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11a730: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11a730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a734: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x11a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11a738: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x11a738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x11a73c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x11a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x11a740: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x11a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x11a744: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a748: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x11a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x11a74c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x11a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x11a750: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x11a750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x11a754: 0x2453fe40  addiu       $s3, $v0, -0x1C0
    ctx->pc = 0x11a754u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x11a758: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x11a758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x11a75c: 0x2484edf0  addiu       $a0, $a0, -0x1210
    ctx->pc = 0x11a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    // 0x11a760: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11a760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11a764: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x11a764u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a768: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x11a768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x11a76c: 0x3c160044  lui         $s6, 0x44
    ctx->pc = 0x11a76cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)68 << 16));
    // 0x11a770: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11a770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11a774: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x11a774u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x11a778: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x11a778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x11a77c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x11a77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a780: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x11a780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x11a784: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x11a784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x11a788: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x11A788u;
    SET_GPR_U32(ctx, 31, 0x11A790u);
    ctx->pc = 0x11A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A788u;
    // 0x11a78c: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x11A788u, 0x11A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A790u;
label_11a790:
    // 0x11a790: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a794: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x11A794u;
    SET_GPR_U32(ctx, 31, 0x11A79Cu);
    ctx->pc = 0x11A798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A794u;
    // 0x11a798: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x11A794u, 0x11A79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A79Cu;
label_11a79c:
    // 0x11a79c: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x11a79cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x11a7a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7a4: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x11A7A4u;
    SET_GPR_U32(ctx, 31, 0x11A7ACu);
    ctx->pc = 0x11A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7A4u;
    // 0x11a7a8: 0x24a5ee40  addiu       $a1, $a1, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x11A7A4u, 0x11A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7ACu;
label_11a7ac:
    // 0x11a7ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11a7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7b4: 0xc09dd98  jal         func_277660
    ctx->pc = 0x11A7B4u;
    SET_GPR_U32(ctx, 31, 0x11A7BCu);
    ctx->pc = 0x11A7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7B4u;
    // 0x11a7b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x11A7B4u, 0x11A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7BCu;
label_11a7bc:
    // 0x11a7bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11a7c0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x11a7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11a7c4: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x11A7C4u;
    SET_GPR_U32(ctx, 31, 0x11A7CCu);
    ctx->pc = 0x11A7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7C4u;
    // 0x11a7c8: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x11A7C4u, 0x11A7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7CCu;
label_11a7cc:
    // 0x11a7cc: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x11a7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7d0: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x11a7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11a7d4: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x11a7d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a7d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7dc: 0x0  nop
    ctx->pc = 0x11a7dcu;
    // NOP
label_11a7e0:
    // 0x11a7e0: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x11A7E0u;
    SET_GPR_U32(ctx, 31, 0x11A7E8u);
    ctx->pc = 0x11A7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7E0u;
    // 0x11a7e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x11A7E0u, 0x11A7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7E8u;
label_11a7e8:
    // 0x11a7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A7ECu;
    SET_GPR_U32(ctx, 31, 0x11A7F4u);
    ctx->pc = 0x11A7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7ECu;
    // 0x11a7f0: 0x26c5b980  addiu       $a1, $s6, -0x4680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A7ECu, 0x11A7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7F4u;
label_11a7f4:
    // 0x11a7f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a7f8: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x11a7f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x11a7fc: 0x56a0fff8  bnel        $s5, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11A7FCu;
    {
        const bool branch_taken_0x11a7fc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a7fc) {
            ctx->pc = 0x11A800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A7FCu;
            // 0x11a800: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a7e0;
        }
    }
    ctx->pc = 0x11A804u;
    // 0x11a804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a808: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x11A808u;
    SET_GPR_U32(ctx, 31, 0x11A810u);
    ctx->pc = 0x11A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A808u;
    // 0x11a80c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x11A808u, 0x11A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A810u;
label_11a810:
    // 0x11a810: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x11a810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11a814: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a818: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x11A818u;
    SET_GPR_U32(ctx, 31, 0x11A820u);
    ctx->pc = 0x11A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A818u;
    // 0x11a81c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x11A818u, 0x11A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A820u;
label_11a820:
    // 0x11a820: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x11a820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11a824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a828: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x11A828u;
    SET_GPR_U32(ctx, 31, 0x11A830u);
    ctx->pc = 0x11A82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A828u;
    // 0x11a82c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x11A828u, 0x11A830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A830u;
label_11a830:
    // 0x11a830: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x11a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a834: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a838: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a83c: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x11A83Cu;
    SET_GPR_U32(ctx, 31, 0x11A844u);
    ctx->pc = 0x11A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A83Cu;
    // 0x11a840: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x11A83Cu, 0x11A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A844u;
label_11a844:
    // 0x11a844: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x11a844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11a848: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a84c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x11A84Cu;
    SET_GPR_U32(ctx, 31, 0x11A854u);
    ctx->pc = 0x11A850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A84Cu;
    // 0x11a850: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x11A84Cu, 0x11A854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A854u;
label_11a854:
    // 0x11a854: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x11a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a858: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a85c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a860: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x11A860u;
    SET_GPR_U32(ctx, 31, 0x11A868u);
    ctx->pc = 0x11A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A860u;
    // 0x11a864: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x11A860u, 0x11A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A868u;
label_11a868:
    // 0x11a868: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x11a868u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11a86c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a870: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x11A870u;
    SET_GPR_U32(ctx, 31, 0x11A878u);
    ctx->pc = 0x11A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A870u;
    // 0x11a874: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x11A870u, 0x11A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A878u;
label_11a878:
    // 0x11a878: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x11a878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a87c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a880: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a884: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x11A884u;
    SET_GPR_U32(ctx, 31, 0x11A88Cu);
    ctx->pc = 0x11A888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A884u;
    // 0x11a888: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x11A884u, 0x11A88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A88Cu;
label_11a88c:
    // 0x11a88c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x11a88cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11a890: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11a890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a894: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x11A894u;
    SET_GPR_U32(ctx, 31, 0x11A89Cu);
    ctx->pc = 0x11A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A894u;
    // 0x11a898: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x11A894u, 0x11A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A89Cu;
label_11a89c:
    // 0x11a89c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x11a89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a8a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8a4: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x11A8A4u;
    SET_GPR_U32(ctx, 31, 0x11A8ACu);
    ctx->pc = 0x11A8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A8A4u;
    // 0x11a8a8: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x11A8A4u, 0x11A8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A8ACu;
label_11a8ac:
    // 0x11a8ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8b0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x11A8B0u;
    SET_GPR_U32(ctx, 31, 0x11A8B8u);
    ctx->pc = 0x11A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A8B0u;
    // 0x11a8b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11A8B0u, 0x11A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A8B8u;
label_11a8b8:
    // 0x11a8b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11a8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8bc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x11A8BCu;
    SET_GPR_U32(ctx, 31, 0x11A8C4u);
    ctx->pc = 0x11A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A8BCu;
    // 0x11a8c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11A8BCu, 0x11A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A8C4u;
label_11a8c4:
    // 0x11a8c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8c8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x11A8C8u;
    SET_GPR_U32(ctx, 31, 0x11A8D0u);
    ctx->pc = 0x11A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A8C8u;
    // 0x11a8cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11A8C8u, 0x11A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A8D0u;
label_11a8d0:
    // 0x11a8d0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11a8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a8d4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x11a8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11a8d8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x11a8d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a8dc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x11a8dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11a8e0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x11a8e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a8e4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x11a8e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x11a8e8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11a8e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a8ec: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x11a8ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x11a8f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11a8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11a8f4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x11a8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11A8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8F8u;
        // 0x11a8fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A900u;
}
