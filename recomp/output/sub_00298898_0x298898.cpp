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

// Function: sub_00298898
// Address: 0x298898 - 0x2989a0
void sub_00298898_0x298898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298898_0x298898");
#endif

    switch (ctx->pc) {
        case 0x2988b8u: goto label_2988b8;
        case 0x2988c8u: goto label_2988c8;
        case 0x2988e0u: goto label_2988e0;
        case 0x2988ecu: goto label_2988ec;
        case 0x298920u: goto label_298920;
        case 0x298950u: goto label_298950;
        case 0x298978u: goto label_298978;
        default: break;
    }

    ctx->pc = 0x298898u;

    // 0x298898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29889c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2988a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2988a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2988a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2988a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2988a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2988a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2988ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2988acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2988b0: 0xc0a61ae  jal         func_2986B8
    ctx->pc = 0x2988B0u;
    SET_GPR_U32(ctx, 31, 0x2988B8u);
    ctx->pc = 0x2988B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2988B0u;
    // 0x2988b4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2986B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2986B8u, 0x2988B0u, 0x2988B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2988B8u;
label_2988b8:
    // 0x2988b8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2988B8u;
    {
        const bool branch_taken_0x2988b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2988BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988B8u;
        // 0x2988bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988b8) {
            ctx->pc = 0x298984u;
            goto label_298984;
        }
    }
    ctx->pc = 0x2988C0u;
    // 0x2988c0: 0xc0a1f58  jal         func_287D60
    ctx->pc = 0x2988C0u;
    SET_GPR_U32(ctx, 31, 0x2988C8u);
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x2988C0u, 0x2988C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2988C8u;
label_2988c8:
    // 0x2988c8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2988C8u;
    {
        const bool branch_taken_0x2988c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2988CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988C8u;
        // 0x2988cc: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988c8) {
            ctx->pc = 0x298980u;
            goto label_298980;
        }
    }
    ctx->pc = 0x2988D0u;
    // 0x2988d0: 0x3c130052  lui         $s3, 0x52
    ctx->pc = 0x2988d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)82 << 16));
    // 0x2988d4: 0x24842450  addiu       $a0, $a0, 0x2450
    ctx->pc = 0x2988d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    // 0x2988d8: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x2988D8u;
    SET_GPR_U32(ctx, 31, 0x2988E0u);
    ctx->pc = 0x2988DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2988D8u;
    // 0x2988dc: 0x2671ac80  addiu       $s1, $s3, -0x5380 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF918u, 0x2988D8u, 0x2988E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2988E0u;
label_2988e0:
    // 0x2988e0: 0x8e500078  lw          $s0, 0x78($s2)
    ctx->pc = 0x2988e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2988e4: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2988E4u;
    SET_GPR_U32(ctx, 31, 0x2988ECu);
    ctx->pc = 0x2988E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2988E4u;
    // 0x2988e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2988E4u, 0x2988ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2988ECu;
label_2988ec:
    // 0x2988ec: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x2988ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2988f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2988f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2988f4: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x2988f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2988f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2988f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2988fc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2988fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x298900: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x298900u;
    {
        const bool branch_taken_0x298900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x298904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298900u;
        // 0x298904: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298900) {
            ctx->pc = 0x298928u;
            goto label_298928;
        }
    }
    ctx->pc = 0x298908u;
    // 0x298908: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x298908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x29890c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x29890cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x298910: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x298914: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x298914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x298918: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x298918u;
    SET_GPR_U32(ctx, 31, 0x298920u);
    ctx->pc = 0x29891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298918u;
    // 0x29891c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x298918u, 0x298920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298920u;
label_298920:
    // 0x298920: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x298920u;
    {
        const bool branch_taken_0x298920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298920u;
        // 0x298924: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298920) {
            ctx->pc = 0x298984u;
            goto label_298984;
        }
    }
    ctx->pc = 0x298928u;
label_298928:
    // 0x298928: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x298928u;
    {
        const bool branch_taken_0x298928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298928u;
        // 0x29892c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298928) {
            ctx->pc = 0x298958u;
            goto label_298958;
        }
    }
    ctx->pc = 0x298930u;
    // 0x298930: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x298930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x298934: 0xa045a930  sb          $a1, -0x56D0($v0)
    ctx->pc = 0x298934u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945072), (uint8_t)GPR_U32(ctx, 5));
    // 0x298938: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x298938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x29893c: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x29893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x298940: 0xae25591c  sw          $a1, 0x591C($s1)
    ctx->pc = 0x298940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22812), GPR_U32(ctx, 5));
    // 0x298944: 0xae225908  sw          $v0, 0x5908($s1)
    ctx->pc = 0x298944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22792), GPR_U32(ctx, 2));
    // 0x298948: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x298948u;
    SET_GPR_U32(ctx, 31, 0x298950u);
    ctx->pc = 0x29894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298948u;
    // 0x29894c: 0xae2358f8  sw          $v1, 0x58F8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 22776), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x298948u, 0x298950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298950u;
label_298950:
    // 0x298950: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x298950u;
    {
        const bool branch_taken_0x298950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298950u;
        // 0x298954: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298950) {
            ctx->pc = 0x298984u;
            goto label_298984;
        }
    }
    ctx->pc = 0x298958u;
label_298958:
    // 0x298958: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x298958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29895c: 0xa045a930  sb          $a1, -0x56D0($v0)
    ctx->pc = 0x29895cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945072), (uint8_t)GPR_U32(ctx, 5));
    // 0x298960: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x298960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x298964: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x298964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x298968: 0xae2358f8  sw          $v1, 0x58F8($s1)
    ctx->pc = 0x298968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22776), GPR_U32(ctx, 3));
    // 0x29896c: 0xae225908  sw          $v0, 0x5908($s1)
    ctx->pc = 0x29896cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22792), GPR_U32(ctx, 2));
    // 0x298970: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x298970u;
    SET_GPR_U32(ctx, 31, 0x298978u);
    ctx->pc = 0x298974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298970u;
    // 0x298974: 0xae20591c  sw          $zero, 0x591C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 22812), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x298970u, 0x298978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298978u;
label_298978:
    // 0x298978: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x298978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x29897c: 0xae63ac80  sw          $v1, -0x5380($s3)
    ctx->pc = 0x29897cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294945920), GPR_U32(ctx, 3));
label_298980:
    // 0x298980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_298984:
    // 0x298984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x298984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298988: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x298988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29898c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29898cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x298990: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x298990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298994: 0x3e00008  jr          $ra
    ctx->pc = 0x298994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298994u;
        // 0x298998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29899Cu;
    // 0x29899c: 0x0  nop
    ctx->pc = 0x29899cu;
    // NOP
    ctx->pc = 0x2989a0u;
}
