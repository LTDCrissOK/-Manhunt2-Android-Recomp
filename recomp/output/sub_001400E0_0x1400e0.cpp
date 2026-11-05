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

// Function: sub_001400E0
// Address: 0x1400e0 - 0x1401f0
void sub_001400E0_0x1400e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001400E0_0x1400e0");
#endif

    switch (ctx->pc) {
        case 0x140108u: goto label_140108;
        case 0x140114u: goto label_140114;
        case 0x140124u: goto label_140124;
        case 0x140134u: goto label_140134;
        case 0x140158u: goto label_140158;
        case 0x14017cu: goto label_14017c;
        case 0x140198u: goto label_140198;
        case 0x1401acu: goto label_1401ac;
        case 0x1401c4u: goto label_1401c4;
        case 0x1401d0u: goto label_1401d0;
        default: break;
    }

    ctx->pc = 0x1400e0u;

    // 0x1400e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1400e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1400e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1400e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1400e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1400e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1400ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1400ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1400f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1400f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1400f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1400f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1400f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1400f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1400fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1400fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x140100: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x140100u;
    SET_GPR_U32(ctx, 31, 0x140108u);
    ctx->pc = 0x140104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140100u;
    // 0x140104: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x140100u, 0x140108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140108u;
label_140108:
    // 0x140108: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x140108u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14010c: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14010Cu;
    SET_GPR_U32(ctx, 31, 0x140114u);
    ctx->pc = 0x140110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14010Cu;
    // 0x140110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14010Cu, 0x140114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140114u;
label_140114:
    // 0x140114: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x140114u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x140118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14011c: 0xc04fe52  jal         func_13F948
    ctx->pc = 0x14011Cu;
    SET_GPR_U32(ctx, 31, 0x140124u);
    ctx->pc = 0x140120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14011Cu;
    // 0x140120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F948u, 0x14011Cu, 0x140124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140124u;
label_140124:
    // 0x140124: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x140124u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x140128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14012c: 0xc04fe6a  jal         func_13F9A8
    ctx->pc = 0x14012Cu;
    SET_GPR_U32(ctx, 31, 0x140134u);
    ctx->pc = 0x140130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14012Cu;
    // 0x140130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F9A8u, 0x14012Cu, 0x140134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140134u;
label_140134:
    // 0x140134: 0x8e020620  lw          $v0, 0x620($s0)
    ctx->pc = 0x140134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x140138: 0x3c120049  lui         $s2, 0x49
    ctx->pc = 0x140138u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)73 << 16));
    // 0x14013c: 0x26529a08  addiu       $s2, $s2, -0x65F8
    ctx->pc = 0x14013cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
    // 0x140140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14014c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x140150: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x140150u;
    SET_GPR_U32(ctx, 31, 0x140158u);
    ctx->pc = 0x140154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140150u;
    // 0x140154: 0x8c510108  lw          $s1, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x140150u, 0x140158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140158u;
label_140158:
    // 0x140158: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x140158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14015c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x14015cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140160: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x140160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140164: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x140164u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14016c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14016cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140174: 0xc04daca  jal         func_136B28
    ctx->pc = 0x140174u;
    SET_GPR_U32(ctx, 31, 0x14017Cu);
    ctx->pc = 0x140178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140174u;
    // 0x140178: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x140174u, 0x14017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14017Cu;
label_14017c:
    // 0x14017c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14017cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x140180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140184: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x140184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x140188: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x140188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14018c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14018cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140190: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x140190u;
    SET_GPR_U32(ctx, 31, 0x140198u);
    ctx->pc = 0x140194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140190u;
    // 0x140194: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x140190u, 0x140198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140198u;
label_140198:
    // 0x140198: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x140198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14019c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14019cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1401a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1401a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1401a4: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x1401A4u;
    SET_GPR_U32(ctx, 31, 0x1401ACu);
    ctx->pc = 0x1401A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1401A4u;
    // 0x1401a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x1401A4u, 0x1401ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1401ACu;
label_1401ac:
    // 0x1401ac: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1401acu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1401b0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1401b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1401b4: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x1401b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1401b8: 0x8e50020c  lw          $s0, 0x20C($s2)
    ctx->pc = 0x1401b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
    // 0x1401bc: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1401BCu;
    SET_GPR_U32(ctx, 31, 0x1401C4u);
    ctx->pc = 0x1401C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1401BCu;
    // 0x1401c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1401BCu, 0x1401C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1401C4u;
label_1401c4:
    // 0x1401c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1401c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1401c8: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x1401C8u;
    SET_GPR_U32(ctx, 31, 0x1401D0u);
    ctx->pc = 0x1401CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1401C8u;
    // 0x1401cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x1401C8u, 0x1401D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1401D0u;
label_1401d0:
    // 0x1401d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1401d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1401d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1401d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1401d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1401d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1401dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1401dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1401e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1401e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1401e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1401E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1401E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401E4u;
        // 0x1401e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1401E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1401ECu;
    // 0x1401ec: 0x0  nop
    ctx->pc = 0x1401ecu;
    // NOP
    ctx->pc = 0x1401f0u;
}
