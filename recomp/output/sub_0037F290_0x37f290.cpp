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

// Function: sub_0037F290
// Address: 0x37f290 - 0x37f3d0
void sub_0037F290_0x37f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F290_0x37f290");
#endif

    switch (ctx->pc) {
        case 0x37f2dcu: goto label_37f2dc;
        case 0x37f2ecu: goto label_37f2ec;
        case 0x37f304u: goto label_37f304;
        case 0x37f310u: goto label_37f310;
        case 0x37f320u: goto label_37f320;
        case 0x37f338u: goto label_37f338;
        case 0x37f344u: goto label_37f344;
        case 0x37f354u: goto label_37f354;
        case 0x37f36cu: goto label_37f36c;
        default: break;
    }

    ctx->pc = 0x37f290u;

    // 0x37f290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37f290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37f294: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37f294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37f298: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x37f298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x37f29c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37f29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x37f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x37f2a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x37f2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x37f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x37f2ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x37f2acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x37f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x37f2b4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x37f2b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2b8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x37f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x37f2bc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x37f2bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2c0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x37f2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x37f2c4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x37f2c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2c8: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x37f2c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37f2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37f2d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37f2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37f2d4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x37F2D4u;
    SET_GPR_U32(ctx, 31, 0x37F2DCu);
    ctx->pc = 0x37F2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F2D4u;
    // 0x37f2d8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x37F2D4u, 0x37F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F2DCu;
label_37f2dc:
    // 0x37f2dc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x37f2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x37f2e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37f2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2e4: 0xc0dde56  jal         func_377958
    ctx->pc = 0x37F2E4u;
    SET_GPR_U32(ctx, 31, 0x37F2ECu);
    ctx->pc = 0x37F2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F2E4u;
    // 0x37f2e8: 0x248481f8  addiu       $a0, $a0, -0x7E08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x37F2E4u, 0x37F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F2ECu;
label_37f2ec:
    // 0x37f2ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37f2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x37f2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37f2f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37f2f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2fc: 0xc0ded4a  jal         func_37B528
    ctx->pc = 0x37F2FCu;
    SET_GPR_U32(ctx, 31, 0x37F304u);
    ctx->pc = 0x37F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F2FCu;
    // 0x37f300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B528u, 0x37F2FCu, 0x37F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F304u;
label_37f304:
    // 0x37f304: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x37f304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37f308: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x37F308u;
    SET_GPR_U32(ctx, 31, 0x37F310u);
    ctx->pc = 0x37F30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F308u;
    // 0x37f30c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x37F308u, 0x37F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F310u;
label_37f310:
    // 0x37f310: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x37f310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x37f314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37f314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f318: 0xc0dde56  jal         func_377958
    ctx->pc = 0x37F318u;
    SET_GPR_U32(ctx, 31, 0x37F320u);
    ctx->pc = 0x37F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F318u;
    // 0x37f31c: 0x24848640  addiu       $a0, $a0, -0x79C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x37F318u, 0x37F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F320u;
label_37f320:
    // 0x37f320: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x37f320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f324: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x37f324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f328: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37f328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f32c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37f32cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f330: 0xc0ded4a  jal         func_37B528
    ctx->pc = 0x37F330u;
    SET_GPR_U32(ctx, 31, 0x37F338u);
    ctx->pc = 0x37F334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F330u;
    // 0x37f334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B528u, 0x37F330u, 0x37F338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F338u;
label_37f338:
    // 0x37f338: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x37f338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37f33c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x37F33Cu;
    SET_GPR_U32(ctx, 31, 0x37F344u);
    ctx->pc = 0x37F340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F33Cu;
    // 0x37f340: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x37F33Cu, 0x37F344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F344u;
label_37f344:
    // 0x37f344: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x37f344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x37f348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37f348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f34c: 0xc0dde56  jal         func_377958
    ctx->pc = 0x37F34Cu;
    SET_GPR_U32(ctx, 31, 0x37F354u);
    ctx->pc = 0x37F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F34Cu;
    // 0x37f350: 0x24848e48  addiu       $a0, $a0, -0x71B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x37F34Cu, 0x37F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F354u;
label_37f354:
    // 0x37f354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37f354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f358: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x37f358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f35c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x37f35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f360: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37f360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f364: 0xc0ded4a  jal         func_37B528
    ctx->pc = 0x37F364u;
    SET_GPR_U32(ctx, 31, 0x37F36Cu);
    ctx->pc = 0x37F368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F364u;
    // 0x37f368: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B528u, 0x37F364u, 0x37F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F36Cu;
label_37f36c:
    // 0x37f36c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37f36cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f370: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x37f370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37f374: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x37f374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
    // 0x37f378: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37f378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f37c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x37f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37f380: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x37f380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x37f384: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x37f384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37f388: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x37f388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x37f38c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x37f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37f390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37f390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37f394: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x37f394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37f398: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x37f398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f39c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x37f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x37f3a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37f3a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37f3a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x37f3a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37f3a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x37f3a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37f3ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x37f3acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37f3b0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x37f3b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37f3b4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x37f3b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37f3b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37f3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37f3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x37F3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F3BCu;
        // 0x37f3c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F3C4u;
    // 0x37f3c4: 0x0  nop
    ctx->pc = 0x37f3c4u;
    // NOP
    // 0x37f3c8: 0x0  nop
    ctx->pc = 0x37f3c8u;
    // NOP
    // 0x37f3cc: 0x0  nop
    ctx->pc = 0x37f3ccu;
    // NOP
    ctx->pc = 0x37f3d0u;
}
