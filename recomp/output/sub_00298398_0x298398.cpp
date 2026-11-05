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

// Function: sub_00298398
// Address: 0x298398 - 0x298568
void sub_00298398_0x298398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298398_0x298398");
#endif

    switch (ctx->pc) {
        case 0x2983dcu: goto label_2983dc;
        case 0x2983e4u: goto label_2983e4;
        case 0x2983ecu: goto label_2983ec;
        case 0x2983f8u: goto label_2983f8;
        case 0x298408u: goto label_298408;
        case 0x298414u: goto label_298414;
        case 0x298424u: goto label_298424;
        case 0x298430u: goto label_298430;
        case 0x298440u: goto label_298440;
        case 0x298454u: goto label_298454;
        case 0x298460u: goto label_298460;
        case 0x298470u: goto label_298470;
        case 0x298480u: goto label_298480;
        case 0x29848cu: goto label_29848c;
        case 0x2984a0u: goto label_2984a0;
        case 0x2984b0u: goto label_2984b0;
        case 0x2984d4u: goto label_2984d4;
        default: break;
    }

    ctx->pc = 0x298398u;

    // 0x298398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29839c: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x29839cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x2983a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2983a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2983a4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2983a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2983a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2983a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2983acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2983b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2983b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2983b4: 0x2450ac80  addiu       $s0, $v0, -0x5380
    ctx->pc = 0x2983b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
    // 0x2983b8: 0x8c44ac80  lw          $a0, -0x5380($v0)
    ctx->pc = 0x2983b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51AC80u));
    // 0x2983bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2983bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983c0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2983C0u;
    {
        const bool branch_taken_0x2983c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2983C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983C0u;
        // 0x2983c4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983c0) {
            ctx->pc = 0x2983D4u;
            goto label_2983d4;
        }
    }
    ctx->pc = 0x2983C8u;
    // 0x2983c8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2983c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2983cc: 0x14820036  bne         $a0, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2983CCu;
    {
        const bool branch_taken_0x2983cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2983cc) {
            ctx->pc = 0x2984A8u;
            goto label_2984a8;
        }
    }
    ctx->pc = 0x2983D4u;
label_2983d4:
    // 0x2983d4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2983D4u;
    SET_GPR_U32(ctx, 31, 0x2983DCu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2983D4u, 0x2983DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983DCu;
label_2983dc:
    // 0x2983dc: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2983DCu;
    SET_GPR_U32(ctx, 31, 0x2983E4u);
    ctx->pc = 0x2983E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2983DCu;
    // 0x2983e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2983DCu, 0x2983E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983E4u;
label_2983e4:
    // 0x2983e4: 0xc0a6dee  jal         func_29B7B8
    ctx->pc = 0x2983E4u;
    SET_GPR_U32(ctx, 31, 0x2983ECu);
    ctx->pc = 0x2983E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2983E4u;
    // 0x2983e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B7B8u, 0x2983E4u, 0x2983ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983ECu;
label_2983ec:
    // 0x2983ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2983ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983f0: 0xc0a71c2  jal         func_29C708
    ctx->pc = 0x2983F0u;
    SET_GPR_U32(ctx, 31, 0x2983F8u);
    ctx->pc = 0x2983F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2983F0u;
    // 0x2983f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C708u, 0x2983F0u, 0x2983F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983F8u;
label_2983f8:
    // 0x2983f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2983F8u;
    {
        const bool branch_taken_0x2983f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2983f8) {
            ctx->pc = 0x298438u;
            goto label_298438;
        }
    }
    ctx->pc = 0x298400u;
    // 0x298400: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x298400u;
    SET_GPR_U32(ctx, 31, 0x298408u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x298400u, 0x298408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298408u;
label_298408:
    // 0x298408: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29840c: 0xc0a6dee  jal         func_29B7B8
    ctx->pc = 0x29840Cu;
    SET_GPR_U32(ctx, 31, 0x298414u);
    ctx->pc = 0x298410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29840Cu;
    // 0x298410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B7B8u, 0x29840Cu, 0x298414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298414u;
label_298414:
    // 0x298414: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x298414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29841c: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x29841Cu;
    SET_GPR_U32(ctx, 31, 0x298424u);
    ctx->pc = 0x298420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29841Cu;
    // 0x298420: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x29841Cu, 0x298424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298424u;
label_298424:
    // 0x298424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298428: 0xc0a754c  jal         func_29D530
    ctx->pc = 0x298428u;
    SET_GPR_U32(ctx, 31, 0x298430u);
    ctx->pc = 0x29842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298428u;
    // 0x29842c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D530u, 0x298428u, 0x298430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298430u;
label_298430:
    // 0x298430: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x298430u;
    {
        const bool branch_taken_0x298430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298430u;
        // 0x298434: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298430) {
            ctx->pc = 0x298554u;
            goto label_298554;
        }
    }
    ctx->pc = 0x298438u;
label_298438:
    // 0x298438: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x298438u;
    SET_GPR_U32(ctx, 31, 0x298440u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x298438u, 0x298440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298440u;
label_298440:
    // 0x298440: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x298440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x298444: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298448: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x298448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29844c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29844Cu;
    SET_GPR_U32(ctx, 31, 0x298454u);
    ctx->pc = 0x298450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29844Cu;
    // 0x298450: 0x24a5bd48  addiu       $a1, $a1, -0x42B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29844Cu, 0x298454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298454u;
label_298454:
    // 0x298454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298458: 0xc0a7196  jal         func_29C658
    ctx->pc = 0x298458u;
    SET_GPR_U32(ctx, 31, 0x298460u);
    ctx->pc = 0x29845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298458u;
    // 0x29845c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C658u, 0x298458u, 0x298460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298460u;
label_298460:
    // 0x298460: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x298464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298468: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x298468u;
    SET_GPR_U32(ctx, 31, 0x298470u);
    ctx->pc = 0x29846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298468u;
    // 0x29846c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x298468u, 0x298470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298470u;
label_298470:
    // 0x298470: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x298470u;
    {
        const bool branch_taken_0x298470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x298474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298470u;
        // 0x298474: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298470) {
            ctx->pc = 0x298554u;
            goto label_298554;
        }
    }
    ctx->pc = 0x298478u;
    // 0x298478: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x298478u;
    SET_GPR_U32(ctx, 31, 0x298480u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x298478u, 0x298480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298480u;
label_298480:
    // 0x298480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298484: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x298484u;
    SET_GPR_U32(ctx, 31, 0x29848Cu);
    ctx->pc = 0x298488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298484u;
    // 0x298488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x298484u, 0x29848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29848Cu;
label_29848c:
    // 0x29848c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x29848cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x298490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298494: 0xac62a438  sw          $v0, -0x5BC8($v1)
    ctx->pc = 0x298494u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FA438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA438u, _value); } while (0);
    // 0x298498: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x298498u;
    SET_GPR_U32(ctx, 31, 0x2984A0u);
    ctx->pc = 0x29849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298498u;
    // 0x29849c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x298498u, 0x2984A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984A0u;
label_2984a0:
    // 0x2984a0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2984A0u;
    {
        const bool branch_taken_0x2984a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2984A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984A0u;
        // 0x2984a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984a0) {
            ctx->pc = 0x298554u;
            goto label_298554;
        }
    }
    ctx->pc = 0x2984A8u;
label_2984a8:
    // 0x2984a8: 0xc0addd2  jal         func_2B7748
    ctx->pc = 0x2984A8u;
    SET_GPR_U32(ctx, 31, 0x2984B0u);
    ctx->pc = 0x2984ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2984A8u;
    // 0x2984ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7748u, 0x2984A8u, 0x2984B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984B0u;
label_2984b0:
    // 0x2984b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2984B0u;
    {
        const bool branch_taken_0x2984b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2984B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984B0u;
        // 0x2984b4: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984b0) {
            ctx->pc = 0x2984CCu;
            goto label_2984cc;
        }
    }
    ctx->pc = 0x2984B8u;
    // 0x2984b8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2984b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2984bc: 0xae42ac80  sw          $v0, -0x5380($s2)
    ctx->pc = 0x2984bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945920), GPR_U32(ctx, 2));
    // 0x2984c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2984c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2984c4: 0xae03591c  sw          $v1, 0x591C($s0)
    ctx->pc = 0x2984c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22812), GPR_U32(ctx, 3));
    // 0x2984c8: 0xae0458f8  sw          $a0, 0x58F8($s0)
    ctx->pc = 0x2984c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22776), GPR_U32(ctx, 4));
label_2984cc:
    // 0x2984cc: 0xc0a1f58  jal         func_287D60
    ctx->pc = 0x2984CCu;
    SET_GPR_U32(ctx, 31, 0x2984D4u);
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x2984CCu, 0x2984D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984D4u;
label_2984d4:
    // 0x2984d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2984D4u;
    {
        const bool branch_taken_0x2984d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2984D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984D4u;
        // 0x2984d8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984d4) {
            ctx->pc = 0x2984E4u;
            goto label_2984e4;
        }
    }
    ctx->pc = 0x2984DCu;
    // 0x2984dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2984dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2984e0: 0xac62a92c  sw          $v0, -0x56D4($v1)
    ctx->pc = 0x2984e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945068), GPR_U32(ctx, 2));
label_2984e4:
    // 0x2984e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2984e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2984e8: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x2984e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x2984ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2984ECu;
    {
        const bool branch_taken_0x2984ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2984F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984ECu;
        // 0x2984f0: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984ec) {
            ctx->pc = 0x298508u;
            goto label_298508;
        }
    }
    ctx->pc = 0x2984F4u;
    // 0x2984f4: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2984f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2984f8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2984f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2984fc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2984fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x298500: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x298500u;
    {
        const bool branch_taken_0x298500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298500) {
            ctx->pc = 0x298504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298500u;
            // 0x298504: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298510u;
            goto label_298510;
        }
    }
    ctx->pc = 0x298508u;
label_298508:
    // 0x298508: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x298508u;
    {
        const bool branch_taken_0x298508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298508u;
        // 0x29850c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298508) {
            ctx->pc = 0x298514u;
            goto label_298514;
        }
    }
    ctx->pc = 0x298510u;
label_298510:
    // 0x298510: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x298510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_298514:
    // 0x298514: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x298514u;
    {
        const bool branch_taken_0x298514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298514u;
        // 0x298518: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298514) {
            ctx->pc = 0x298554u;
            goto label_298554;
        }
    }
    ctx->pc = 0x29851Cu;
    // 0x29851c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x29851cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x298520: 0x8c62a92c  lw          $v0, -0x56D4($v1)
    ctx->pc = 0x298520u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA92Cu));
    // 0x298524: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x298524u;
    {
        const bool branch_taken_0x298524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298524u;
        // 0x298528: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298524) {
            ctx->pc = 0x298554u;
            goto label_298554;
        }
    }
    ctx->pc = 0x29852Cu;
    // 0x29852c: 0xac60a92c  sw          $zero, -0x56D4($v1)
    ctx->pc = 0x29852cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945068), GPR_U32(ctx, 0));
    // 0x298530: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x298530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x298534: 0x2643ac80  addiu       $v1, $s2, -0x5380
    ctx->pc = 0x298534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945920));
    // 0x298538: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x298538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x29853c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x29853cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298540: 0xa045a928  sb          $a1, -0x56D8($v0)
    ctx->pc = 0x298540u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x298544: 0xac645908  sw          $a0, 0x5908($v1)
    ctx->pc = 0x298544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22792), GPR_U32(ctx, 4));
    // 0x298548: 0xac6658f8  sw          $a2, 0x58F8($v1)
    ctx->pc = 0x298548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22776), GPR_U32(ctx, 6));
    // 0x29854c: 0xac65591c  sw          $a1, 0x591C($v1)
    ctx->pc = 0x29854cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22812), GPR_U32(ctx, 5));
    // 0x298550: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_298554:
    // 0x298554: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x298554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x298558: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29855c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x29855cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298560: 0x3e00008  jr          $ra
    ctx->pc = 0x298560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298560u;
        // 0x298564: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298568u;
}
