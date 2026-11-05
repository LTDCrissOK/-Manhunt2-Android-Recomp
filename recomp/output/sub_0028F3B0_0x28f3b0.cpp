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

// Function: sub_0028F3B0
// Address: 0x28f3b0 - 0x28f4e0
void sub_0028F3B0_0x28f3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F3B0_0x28f3b0");
#endif

    switch (ctx->pc) {
        case 0x28f3f0u: goto label_28f3f0;
        case 0x28f408u: goto label_28f408;
        case 0x28f420u: goto label_28f420;
        case 0x28f438u: goto label_28f438;
        case 0x28f460u: goto label_28f460;
        case 0x28f488u: goto label_28f488;
        default: break;
    }

    ctx->pc = 0x28f3b0u;

    // 0x28f3b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28f3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28f3b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28f3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28f3b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28f3b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f3c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28f3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28f3c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28f3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28f3cc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28f3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28f3d0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28f3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28f3d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x28f3d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28f3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28f3dc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x28f3dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28f3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28f3e4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x28f3e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3e8: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x28F3E8u;
    SET_GPR_U32(ctx, 31, 0x28F3F0u);
    ctx->pc = 0x28F3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F3E8u;
    // 0x28f3ec: 0x24a5b300  addiu       $a1, $a1, -0x4D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x28F3E8u, 0x28F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F3F0u;
label_28f3f0:
    // 0x28f3f0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28F3F0u;
    {
        const bool branch_taken_0x28f3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3F0u;
        // 0x28f3f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3f0) {
            ctx->pc = 0x28F428u;
            goto label_28f428;
        }
    }
    ctx->pc = 0x28F3F8u;
    // 0x28f3f8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28f3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f400: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x28F400u;
    SET_GPR_U32(ctx, 31, 0x28F408u);
    ctx->pc = 0x28F404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F400u;
    // 0x28f404: 0x24a5b308  addiu       $a1, $a1, -0x4CF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x28F400u, 0x28F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F408u;
label_28f408:
    // 0x28f408: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28F408u;
    {
        const bool branch_taken_0x28f408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F408u;
        // 0x28f40c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f408) {
            ctx->pc = 0x28F428u;
            goto label_28f428;
        }
    }
    ctx->pc = 0x28F410u;
    // 0x28f410: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28f410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28f414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f418: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x28F418u;
    SET_GPR_U32(ctx, 31, 0x28F420u);
    ctx->pc = 0x28F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F418u;
    // 0x28f41c: 0x24a5b310  addiu       $a1, $a1, -0x4CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x28F418u, 0x28F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F420u;
label_28f420:
    // 0x28f420: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28F420u;
    {
        const bool branch_taken_0x28f420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F420u;
        // 0x28f424: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f420) {
            ctx->pc = 0x28F490u;
            goto label_28f490;
        }
    }
    ctx->pc = 0x28F428u;
label_28f428:
    // 0x28f428: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28f428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28f42c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f430: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x28F430u;
    SET_GPR_U32(ctx, 31, 0x28F438u);
    ctx->pc = 0x28F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F430u;
    // 0x28f434: 0x24a5b318  addiu       $a1, $a1, -0x4CE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x28F430u, 0x28F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F438u;
label_28f438:
    // 0x28f438: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F438u;
    {
        const bool branch_taken_0x28f438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F438u;
        // 0x28f43c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f438) {
            ctx->pc = 0x28F450u;
            goto label_28f450;
        }
    }
    ctx->pc = 0x28F440u;
    // 0x28f440: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28f440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28f444: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x28f444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28f448: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28F448u;
    {
        const bool branch_taken_0x28f448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F448u;
        // 0x28f44c: 0x2463a800  addiu       $v1, $v1, -0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f448) {
            ctx->pc = 0x28F4A4u;
            goto label_28f4a4;
        }
    }
    ctx->pc = 0x28F450u;
label_28f450:
    // 0x28f450: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28f450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28f454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f458: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x28F458u;
    SET_GPR_U32(ctx, 31, 0x28F460u);
    ctx->pc = 0x28F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F458u;
    // 0x28f45c: 0x24a5b328  addiu       $a1, $a1, -0x4CD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x28F458u, 0x28F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F460u;
label_28f460:
    // 0x28f460: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F460u;
    {
        const bool branch_taken_0x28f460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F460u;
        // 0x28f464: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f460) {
            ctx->pc = 0x28F478u;
            goto label_28f478;
        }
    }
    ctx->pc = 0x28F468u;
    // 0x28f468: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28f468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28f46c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x28f46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28f470: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28F470u;
    {
        const bool branch_taken_0x28f470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F470u;
        // 0x28f474: 0x2463a810  addiu       $v1, $v1, -0x57F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f470) {
            ctx->pc = 0x28F4A4u;
            goto label_28f4a4;
        }
    }
    ctx->pc = 0x28F478u;
label_28f478:
    // 0x28f478: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28f478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28f47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f480: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x28F480u;
    SET_GPR_U32(ctx, 31, 0x28F488u);
    ctx->pc = 0x28F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F480u;
    // 0x28f484: 0x24a5b338  addiu       $a1, $a1, -0x4CC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x28F480u, 0x28F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F488u;
label_28f488:
    // 0x28f488: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F488u;
    {
        const bool branch_taken_0x28f488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F488u;
        // 0x28f48c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f488) {
            ctx->pc = 0x28F498u;
            goto label_28f498;
        }
    }
    ctx->pc = 0x28F490u;
label_28f490:
    // 0x28f490: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28F490u;
    {
        const bool branch_taken_0x28f490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F490u;
        // 0x28f494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f490) {
            ctx->pc = 0x28F4BCu;
            goto label_28f4bc;
        }
    }
    ctx->pc = 0x28F498u;
label_28f498:
    // 0x28f498: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28f498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28f49c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x28f49cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28f4a0: 0x2463a820  addiu       $v1, $v1, -0x57E0
    ctx->pc = 0x28f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944800));
label_28f4a4:
    // 0x28f4a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28f4a8: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x28f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
    // 0x28f4ac: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x28f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x28f4b0: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x28f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x28f4b4: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x28f4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x28f4b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f4bc:
    // 0x28f4bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f4c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28f4c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28f4c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28f4c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f4c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28f4c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28f4cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28f4ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f4d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28f4d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28f4d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28f4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x28F4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4D8u;
        // 0x28f4dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F4E0u;
}
