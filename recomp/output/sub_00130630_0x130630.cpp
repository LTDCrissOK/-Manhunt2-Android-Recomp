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

// Function: sub_00130630
// Address: 0x130630 - 0x130710
void sub_00130630_0x130630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130630_0x130630");
#endif

    switch (ctx->pc) {
        case 0x13066cu: goto label_13066c;
        case 0x130678u: goto label_130678;
        case 0x130690u: goto label_130690;
        case 0x13069cu: goto label_13069c;
        case 0x1306acu: goto label_1306ac;
        case 0x1306bcu: goto label_1306bc;
        case 0x1306e4u: goto label_1306e4;
        case 0x1306ecu: goto label_1306ec;
        default: break;
    }

    ctx->pc = 0x130630u;

    // 0x130630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130638: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13063c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13063cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130640: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130644: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x130644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13064c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x130650: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x130650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130654: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130654u;
    {
        const bool branch_taken_0x130654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130654u;
        // 0x130658: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130654) {
            ctx->pc = 0x130664u;
            goto label_130664;
        }
    }
    ctx->pc = 0x13065Cu;
    // 0x13065c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13065Cu;
    {
        const bool branch_taken_0x13065c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13065Cu;
        // 0x130660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13065c) {
            ctx->pc = 0x1306F4u;
            goto label_1306f4;
        }
    }
    ctx->pc = 0x130664u;
label_130664:
    // 0x130664: 0xc046044  jal         func_118110
    ctx->pc = 0x130664u;
    SET_GPR_U32(ctx, 31, 0x13066Cu);
    ctx->pc = 0x130668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130664u;
    // 0x130668: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x130664u, 0x13066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13066Cu;
label_13066c:
    // 0x13066c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x13066cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x130670: 0xc043920  jal         func_10E480
    ctx->pc = 0x130670u;
    SET_GPR_U32(ctx, 31, 0x130678u);
    ctx->pc = 0x130674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130670u;
    // 0x130674: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130670u, 0x130678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130678u;
label_130678:
    // 0x130678: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13067c: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x13067Cu;
    {
        const bool branch_taken_0x13067c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x130680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13067Cu;
        // 0x130680: 0x2e620001  sltiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13067c) {
            ctx->pc = 0x1306F4u;
            goto label_1306f4;
        }
    }
    ctx->pc = 0x130684u;
    // 0x130684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130688: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130688u;
    SET_GPR_U32(ctx, 31, 0x130690u);
    ctx->pc = 0x13068Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130688u;
    // 0x13068c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130688u, 0x130690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130690u;
label_130690:
    // 0x130690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130694: 0xc09504e  jal         func_254138
    ctx->pc = 0x130694u;
    SET_GPR_U32(ctx, 31, 0x13069Cu);
    ctx->pc = 0x130698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130694u;
    // 0x130698: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254138u, 0x130694u, 0x13069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13069Cu;
label_13069c:
    // 0x13069c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13069cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1306a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1306a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306a4: 0xc04785a  jal         func_11E168
    ctx->pc = 0x1306A4u;
    SET_GPR_U32(ctx, 31, 0x1306ACu);
    ctx->pc = 0x1306A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306A4u;
    // 0x1306a8: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x1306A4u, 0x1306ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306ACu;
label_1306ac:
    // 0x1306ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1306ACu;
    {
        const bool branch_taken_0x1306ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1306ac) {
            ctx->pc = 0x1306E4u;
            goto label_1306e4;
        }
    }
    ctx->pc = 0x1306B4u;
    // 0x1306b4: 0xc044474  jal         func_1111D0
    ctx->pc = 0x1306B4u;
    SET_GPR_U32(ctx, 31, 0x1306BCu);
    ctx->pc = 0x1306B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306B4u;
    // 0x1306b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1111D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1111D0u, 0x1306B4u, 0x1306BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306BCu;
label_1306bc:
    // 0x1306bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1306bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1306c0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1306c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1306c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1306c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1306c8: 0x0  nop
    ctx->pc = 0x1306c8u;
    // NOP
    // 0x1306cc: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1306ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1306d0: 0x0  nop
    ctx->pc = 0x1306d0u;
    // NOP
    // 0x1306d4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1306D4u;
    {
        const bool branch_taken_0x1306d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1306d4) {
            ctx->pc = 0x1306E4u;
            goto label_1306e4;
        }
    }
    ctx->pc = 0x1306DCu;
    // 0x1306dc: 0xc095274  jal         func_2549D0
    ctx->pc = 0x1306DCu;
    SET_GPR_U32(ctx, 31, 0x1306E4u);
    ctx->pc = 0x1306E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306DCu;
    // 0x1306e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2549D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2549D0u, 0x1306DCu, 0x1306E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306E4u;
label_1306e4:
    // 0x1306e4: 0xc095216  jal         func_254858
    ctx->pc = 0x1306E4u;
    SET_GPR_U32(ctx, 31, 0x1306ECu);
    ctx->pc = 0x1306E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306E4u;
    // 0x1306e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254858u, 0x1306E4u, 0x1306ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306ECu;
label_1306ec:
    // 0x1306ec: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x1306ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x1306f0: 0x2e620001  sltiu       $v0, $s3, 0x1
    ctx->pc = 0x1306f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1306f4:
    // 0x1306f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1306f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1306f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1306f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1306fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1306fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130700: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x130700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130704: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x130704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130708: 0x3e00008  jr          $ra
    ctx->pc = 0x130708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130708u;
        // 0x13070c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130710u;
}
