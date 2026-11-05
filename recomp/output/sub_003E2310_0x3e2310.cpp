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

// Function: sub_003E2310
// Address: 0x3e2310 - 0x3e23b0
void sub_003E2310_0x3e2310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2310_0x3e2310");
#endif

    switch (ctx->pc) {
        case 0x3e2340u: goto label_3e2340;
        case 0x3e234cu: goto label_3e234c;
        case 0x3e2364u: goto label_3e2364;
        case 0x3e2370u: goto label_3e2370;
        case 0x3e237cu: goto label_3e237c;
        case 0x3e2390u: goto label_3e2390;
        default: break;
    }

    ctx->pc = 0x3e2310u;

    // 0x3e2310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e2310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e2314: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e2314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e2318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e231c: 0x244231e8  addiu       $v0, $v0, 0x31E8
    ctx->pc = 0x3e231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12776));
    // 0x3e2320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e2320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e2324: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e2324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2328: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e2328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e232c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e232cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e2330: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e2330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e2334: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x3e2334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x3e2338: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2338u;
    SET_GPR_U32(ctx, 31, 0x3E2340u);
    ctx->pc = 0x3E233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2338u;
    // 0x3e233c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2338u, 0x3E2340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2340u;
label_3e2340:
    // 0x3e2340: 0x2624007c  addiu       $a0, $s1, 0x7C
    ctx->pc = 0x3e2340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
    // 0x3e2344: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2344u;
    SET_GPR_U32(ctx, 31, 0x3E234Cu);
    ctx->pc = 0x3E2348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2344u;
    // 0x3e2348: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2344u, 0x3E234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E234Cu;
label_3e234c:
    // 0x3e234c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e234cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2350: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e2350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e2354: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e2354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e2358: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e2358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e235c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E235Cu;
    SET_GPR_U32(ctx, 31, 0x3E2364u);
    ctx->pc = 0x3E2360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E235Cu;
    // 0x3e2360: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E235Cu, 0x3E2364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2364u;
label_3e2364:
    // 0x3e2364: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e2364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e2368: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2368u;
    SET_GPR_U32(ctx, 31, 0x3E2370u);
    ctx->pc = 0x3E236Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2368u;
    // 0x3e236c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2368u, 0x3E2370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2370u;
label_3e2370:
    // 0x3e2370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2374: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2374u;
    SET_GPR_U32(ctx, 31, 0x3E237Cu);
    ctx->pc = 0x3E2378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2374u;
    // 0x3e2378: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2374u, 0x3E237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E237Cu;
label_3e237c:
    // 0x3e237c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e237cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e2380: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2380u;
    {
        const bool branch_taken_0x3e2380 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2380u;
        // 0x3e2384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2380) {
            ctx->pc = 0x3E2394u;
            goto label_3e2394;
        }
    }
    ctx->pc = 0x3E2388u;
    // 0x3e2388: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E2388u;
    SET_GPR_U32(ctx, 31, 0x3E2390u);
    ctx->pc = 0x3E238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2388u;
    // 0x3e238c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E2388u, 0x3E2390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2390u;
label_3e2390:
    // 0x3e2390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e2390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e2394:
    // 0x3e2394: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e2394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e2398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e2398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e239c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E239Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E23A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E239Cu;
        // 0x3e23a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E239Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E23A4u;
    // 0x3e23a4: 0x0  nop
    ctx->pc = 0x3e23a4u;
    // NOP
    // 0x3e23a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e23a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e23ac: 0x0  nop
    ctx->pc = 0x3e23acu;
    // NOP
    ctx->pc = 0x3e23b0u;
}
