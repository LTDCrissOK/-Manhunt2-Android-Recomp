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

// Function: sub_00166248
// Address: 0x166248 - 0x1663c0
void sub_00166248_0x166248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166248_0x166248");
#endif

    switch (ctx->pc) {
        case 0x166290u: goto label_166290;
        case 0x1662acu: goto label_1662ac;
        case 0x1662b8u: goto label_1662b8;
        case 0x1662d4u: goto label_1662d4;
        case 0x1662e0u: goto label_1662e0;
        case 0x1662fcu: goto label_1662fc;
        case 0x166308u: goto label_166308;
        case 0x166324u: goto label_166324;
        case 0x166330u: goto label_166330;
        case 0x16634cu: goto label_16634c;
        case 0x166358u: goto label_166358;
        case 0x166374u: goto label_166374;
        case 0x166380u: goto label_166380;
        case 0x16639cu: goto label_16639c;
        default: break;
    }

    ctx->pc = 0x166248u;

    // 0x166248: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x166248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x16624c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16624cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166250: 0x8c62079c  lw          $v0, 0x79C($v1)
    ctx->pc = 0x166250u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F079Cu));
    // 0x166254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16625c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16625cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166264: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x166264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x166268: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x166268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16626c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16626cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166270: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x166270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x166274: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x166274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x166278: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x166278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16627c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x16627cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x166280: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x166280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x166284: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x166284u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x166288: 0xc04f098  jal         func_13C260
    ctx->pc = 0x166288u;
    SET_GPR_U32(ctx, 31, 0x166290u);
    ctx->pc = 0x16628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166288u;
    // 0x16628c: 0xac62079c  sw          $v0, 0x79C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1948), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C260u, 0x166288u, 0x166290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166290u;
label_166290:
    // 0x166290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166294: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x166294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166298: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x166298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x16629c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16629cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662a0: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x1662a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x1662a4: 0xc05915e  jal         func_164578
    ctx->pc = 0x1662A4u;
    SET_GPR_U32(ctx, 31, 0x1662ACu);
    ctx->pc = 0x1662A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1662A4u;
    // 0x1662a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164578u, 0x1662A4u, 0x1662ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662ACu;
label_1662ac:
    // 0x1662ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1662acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662b0: 0xc04f098  jal         func_13C260
    ctx->pc = 0x1662B0u;
    SET_GPR_U32(ctx, 31, 0x1662B8u);
    ctx->pc = 0x1662B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1662B0u;
    // 0x1662b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C260u, 0x1662B0u, 0x1662B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662B8u;
label_1662b8:
    // 0x1662b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1662b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1662bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1662bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662c0: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1662c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1662c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1662c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662c8: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x1662c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x1662cc: 0xc05915e  jal         func_164578
    ctx->pc = 0x1662CCu;
    SET_GPR_U32(ctx, 31, 0x1662D4u);
    ctx->pc = 0x1662D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1662CCu;
    // 0x1662d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164578u, 0x1662CCu, 0x1662D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662D4u;
label_1662d4:
    // 0x1662d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1662d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662d8: 0xc04f098  jal         func_13C260
    ctx->pc = 0x1662D8u;
    SET_GPR_U32(ctx, 31, 0x1662E0u);
    ctx->pc = 0x1662DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1662D8u;
    // 0x1662dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C260u, 0x1662D8u, 0x1662E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662E0u;
label_1662e0:
    // 0x1662e0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1662e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1662e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1662e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662e8: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x1662e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x1662ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1662ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662f0: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1662f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1662f4: 0xc05915e  jal         func_164578
    ctx->pc = 0x1662F4u;
    SET_GPR_U32(ctx, 31, 0x1662FCu);
    ctx->pc = 0x1662F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1662F4u;
    // 0x1662f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164578u, 0x1662F4u, 0x1662FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662FCu;
label_1662fc:
    // 0x1662fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1662fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166300: 0xc04f098  jal         func_13C260
    ctx->pc = 0x166300u;
    SET_GPR_U32(ctx, 31, 0x166308u);
    ctx->pc = 0x166304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166300u;
    // 0x166304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C260u, 0x166300u, 0x166308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166308u;
label_166308:
    // 0x166308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16630c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16630cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166310: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x166310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x166314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166318: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x166318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x16631c: 0xc05915e  jal         func_164578
    ctx->pc = 0x16631Cu;
    SET_GPR_U32(ctx, 31, 0x166324u);
    ctx->pc = 0x166320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16631Cu;
    // 0x166320: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164578u, 0x16631Cu, 0x166324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166324u;
label_166324:
    // 0x166324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166328: 0xc04f098  jal         func_13C260
    ctx->pc = 0x166328u;
    SET_GPR_U32(ctx, 31, 0x166330u);
    ctx->pc = 0x16632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166328u;
    // 0x16632c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C260u, 0x166328u, 0x166330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166330u;
label_166330:
    // 0x166330: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166334: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x166334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166338: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x166338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x16633c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16633cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166340: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x166340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x166344: 0xc05915e  jal         func_164578
    ctx->pc = 0x166344u;
    SET_GPR_U32(ctx, 31, 0x16634Cu);
    ctx->pc = 0x166348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166344u;
    // 0x166348: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164578u, 0x166344u, 0x16634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16634Cu;
label_16634c:
    // 0x16634c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16634cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166350: 0xc04f098  jal         func_13C260
    ctx->pc = 0x166350u;
    SET_GPR_U32(ctx, 31, 0x166358u);
    ctx->pc = 0x166354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166350u;
    // 0x166354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C260u, 0x166350u, 0x166358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166358u;
label_166358:
    // 0x166358: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x166358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16635c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16635cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166360: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x166360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x166364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166368: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x166368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x16636c: 0xc05915e  jal         func_164578
    ctx->pc = 0x16636Cu;
    SET_GPR_U32(ctx, 31, 0x166374u);
    ctx->pc = 0x166370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16636Cu;
    // 0x166370: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164578u, 0x16636Cu, 0x166374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166374u;
label_166374:
    // 0x166374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166378: 0xc04f098  jal         func_13C260
    ctx->pc = 0x166378u;
    SET_GPR_U32(ctx, 31, 0x166380u);
    ctx->pc = 0x16637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166378u;
    // 0x16637c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C260u, 0x166378u, 0x166380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166380u;
label_166380:
    // 0x166380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166384: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x166384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x166388: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x166388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
    // 0x16638c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16638cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166390: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x166390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x166394: 0xc059826  jal         func_166098
    ctx->pc = 0x166394u;
    SET_GPR_U32(ctx, 31, 0x16639Cu);
    ctx->pc = 0x166398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166394u;
    // 0x166398: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166098u, 0x166394u, 0x16639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16639Cu;
label_16639c:
    // 0x16639c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16639cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1663a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1663a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1663a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1663a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1663a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1663a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1663ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1663acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1663b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1663b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1663b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1663B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1663B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663B4u;
        // 0x1663b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1663B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1663BCu;
    // 0x1663bc: 0x0  nop
    ctx->pc = 0x1663bcu;
    // NOP
    ctx->pc = 0x1663c0u;
}
