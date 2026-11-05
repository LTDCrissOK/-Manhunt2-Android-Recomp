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

// Function: sub_0013FB68
// Address: 0x13fb68 - 0x13fce0
void sub_0013FB68_0x13fb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FB68_0x13fb68");
#endif

    switch (ctx->pc) {
        case 0x13fbbcu: goto label_13fbbc;
        case 0x13fbd0u: goto label_13fbd0;
        case 0x13fbdcu: goto label_13fbdc;
        case 0x13fbecu: goto label_13fbec;
        case 0x13fbf8u: goto label_13fbf8;
        case 0x13fc08u: goto label_13fc08;
        case 0x13fc24u: goto label_13fc24;
        case 0x13fc48u: goto label_13fc48;
        case 0x13fc54u: goto label_13fc54;
        case 0x13fc60u: goto label_13fc60;
        case 0x13fc7cu: goto label_13fc7c;
        case 0x13fc90u: goto label_13fc90;
        case 0x13fca8u: goto label_13fca8;
        case 0x13fcb4u: goto label_13fcb4;
        case 0x13fcc0u: goto label_13fcc0;
        default: break;
    }

    ctx->pc = 0x13fb68u;

    // 0x13fb68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13fb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13fb6c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13fb70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13fb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13fb74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13fb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13fb78: 0x24509a08  addiu       $s0, $v0, -0x65F8
    ctx->pc = 0x13fb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13fb7c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13fb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13fb80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13fb80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13fb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13fb88: 0x2614020c  addiu       $s4, $s0, 0x20C
    ctx->pc = 0x13fb88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 524));
    // 0x13fb8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13fb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13fb90: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13fb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13fb94: 0x9243046c  lbu         $v1, 0x46C($s2)
    ctx->pc = 0x13fb94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fb98: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x13fb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13fb9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13fba0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13fba4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13fbac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x13fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13fbb0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x13fbb0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13fbb4: 0xc04392e  jal         func_10E4B8
    ctx->pc = 0x13FBB4u;
    SET_GPR_U32(ctx, 31, 0x13FBBCu);
    ctx->pc = 0x13FBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBB4u;
    // 0x13fbb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4B8u, 0x13FBB4u, 0x13FBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBBCu;
label_13fbbc:
    // 0x13fbbc: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x13FBBCu;
    {
        const bool branch_taken_0x13fbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FBBCu;
        // 0x13fbc0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fbbc) {
            ctx->pc = 0x13FCC0u;
            goto label_13fcc0;
        }
    }
    ctx->pc = 0x13FBC4u;
    // 0x13fbc4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13fbc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fbc8: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x13FBC8u;
    SET_GPR_U32(ctx, 31, 0x13FBD0u);
    ctx->pc = 0x13FBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBC8u;
    // 0x13fbcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x13FBC8u, 0x13FBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBD0u;
label_13fbd0:
    // 0x13fbd0: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13fbd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fbd4: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x13FBD4u;
    SET_GPR_U32(ctx, 31, 0x13FBDCu);
    ctx->pc = 0x13FBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBD4u;
    // 0x13fbd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x13FBD4u, 0x13FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBDCu;
label_13fbdc:
    // 0x13fbdc: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13fbdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fbe0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x13fbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13fbe4: 0xc04fe52  jal         func_13F948
    ctx->pc = 0x13FBE4u;
    SET_GPR_U32(ctx, 31, 0x13FBECu);
    ctx->pc = 0x13FBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBE4u;
    // 0x13fbe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F948u, 0x13FBE4u, 0x13FBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBECu;
label_13fbec:
    // 0x13fbec: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13fbecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fbf0: 0xc04fea2  jal         func_13FA88
    ctx->pc = 0x13FBF0u;
    SET_GPR_U32(ctx, 31, 0x13FBF8u);
    ctx->pc = 0x13FBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBF0u;
    // 0x13fbf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FA88u, 0x13FBF0u, 0x13FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBF8u;
label_13fbf8:
    // 0x13fbf8: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13fbf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fbfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13fbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fc00: 0xc04fe6a  jal         func_13F9A8
    ctx->pc = 0x13FC00u;
    SET_GPR_U32(ctx, 31, 0x13FC08u);
    ctx->pc = 0x13FC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC00u;
    // 0x13fc04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F9A8u, 0x13FC00u, 0x13FC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC08u;
label_13fc08:
    // 0x13fc08: 0x8e420620  lw          $v0, 0x620($s2)
    ctx->pc = 0x13fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1568)));
    // 0x13fc0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13fc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc10: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fc14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13fc18: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x13fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13fc1c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x13FC1Cu;
    SET_GPR_U32(ctx, 31, 0x13FC24u);
    ctx->pc = 0x13FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC1Cu;
    // 0x13fc20: 0x8c500108  lw          $s0, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x13FC1Cu, 0x13FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC24u;
label_13fc24:
    // 0x13fc24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13fc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc28: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x13fc28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc2c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x13fc2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fc30: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x13fc30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fc34: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x13fc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13fc38: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x13fc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fc3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13fc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc40: 0xc04daca  jal         func_136B28
    ctx->pc = 0x13FC40u;
    SET_GPR_U32(ctx, 31, 0x13FC48u);
    ctx->pc = 0x13FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC40u;
    // 0x13fc44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x13FC40u, 0x13FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC48u;
label_13fc48:
    // 0x13fc48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13fc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc4c: 0xc046030  jal         func_1180C0
    ctx->pc = 0x13FC4Cu;
    SET_GPR_U32(ctx, 31, 0x13FC54u);
    ctx->pc = 0x13FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC4Cu;
    // 0x13fc50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x13FC4Cu, 0x13FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC54u;
label_13fc54:
    // 0x13fc54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13fc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc58: 0xc0460c4  jal         func_118310
    ctx->pc = 0x13FC58u;
    SET_GPR_U32(ctx, 31, 0x13FC60u);
    ctx->pc = 0x13FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC58u;
    // 0x13fc5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x13FC58u, 0x13FC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC60u;
label_13fc60:
    // 0x13fc60: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13fc60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fc64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc68: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x13fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13fc6c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13fc70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13fc74: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x13FC74u;
    SET_GPR_U32(ctx, 31, 0x13FC7Cu);
    ctx->pc = 0x13FC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC74u;
    // 0x13fc78: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x13FC74u, 0x13FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC7Cu;
label_13fc7c:
    // 0x13fc7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13fc7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x13fc80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13fc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc88: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x13FC88u;
    SET_GPR_U32(ctx, 31, 0x13FC90u);
    ctx->pc = 0x13FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC88u;
    // 0x13fc8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x13FC88u, 0x13FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC90u;
label_13fc90:
    // 0x13fc90: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x13fc90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13fc94: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x13fc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x13fc98: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x13fc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x13fc9c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x13fc9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13fca0: 0xc043c56  jal         func_10F158
    ctx->pc = 0x13FCA0u;
    SET_GPR_U32(ctx, 31, 0x13FCA8u);
    ctx->pc = 0x13FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FCA0u;
    // 0x13fca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x13FCA0u, 0x13FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FCA8u;
label_13fca8:
    // 0x13fca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13fca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fcac: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x13FCACu;
    SET_GPR_U32(ctx, 31, 0x13FCB4u);
    ctx->pc = 0x13FCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FCACu;
    // 0x13fcb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x13FCACu, 0x13FCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FCB4u;
label_13fcb4:
    // 0x13fcb4: 0x8e450620  lw          $a1, 0x620($s2)
    ctx->pc = 0x13fcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1568)));
    // 0x13fcb8: 0xc043e76  jal         func_10F9D8
    ctx->pc = 0x13FCB8u;
    SET_GPR_U32(ctx, 31, 0x13FCC0u);
    ctx->pc = 0x13FCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FCB8u;
    // 0x13fcbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9D8u, 0x13FCB8u, 0x13FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FCC0u;
label_13fcc0:
    // 0x13fcc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13fcc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fcc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13fcc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13fcc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13fcc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fccc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13fcccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13fcd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13fcd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fcd4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13fcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13fcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x13FCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FCD8u;
        // 0x13fcdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FCE0u;
}
