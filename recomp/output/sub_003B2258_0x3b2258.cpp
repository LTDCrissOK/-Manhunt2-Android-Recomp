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

// Function: sub_003B2258
// Address: 0x3b2258 - 0x3b2340
void sub_003B2258_0x3b2258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2258_0x3b2258");
#endif

    switch (ctx->pc) {
        case 0x3b22b4u: goto label_3b22b4;
        default: break;
    }

    ctx->pc = 0x3b2258u;

    // 0x3b2258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b2258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b225c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b225cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b2260: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b2260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2264: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b2264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b2268: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b2268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b226c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b226cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b2270: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b2270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b2274: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B2274u;
    {
        const bool branch_taken_0x3b2274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2274) {
            ctx->pc = 0x3B2278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2274u;
            // 0x3b2278: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2298u;
            goto label_3b2298;
        }
    }
    ctx->pc = 0x3B227Cu;
    // 0x3b227c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3b227cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3b2280: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b2280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b2284: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B2284u;
    {
        const bool branch_taken_0x3b2284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b2284) {
            ctx->pc = 0x3B2288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2284u;
            // 0x3b2288: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2290u;
            goto label_3b2290;
        }
    }
    ctx->pc = 0x3B228Cu;
    // 0x3b228c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b2290:
    // 0x3b2290: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b2290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3b2294: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3b2294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b2298:
    // 0x3b2298: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b2298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b229c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B229Cu;
    {
        const bool branch_taken_0x3b229c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b229c) {
            ctx->pc = 0x3B22A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B229Cu;
            // 0x3b22a0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B22B8u;
            goto label_3b22b8;
        }
    }
    ctx->pc = 0x3B22A4u;
    // 0x3b22a4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3b22a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b22a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b22a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b22ac: 0xc0ec88e  jal         func_3B2238
    ctx->pc = 0x3B22ACu;
    SET_GPR_U32(ctx, 31, 0x3B22B4u);
    ctx->pc = 0x3B22B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B22ACu;
    // 0x3b22b0: 0x26060018  addiu       $a2, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2238u, 0x3B22ACu, 0x3B22B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B22B4u;
label_3b22b4:
    // 0x3b22b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b22b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b22b8:
    // 0x3b22b8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3b22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x3b22bc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3b22bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3b22c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b22c4: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B22C4u;
    {
        const bool branch_taken_0x3b22c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b22c4) {
            ctx->pc = 0x3B22C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B22C4u;
            // 0x3b22c8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B22F8u;
            goto label_3b22f8;
        }
    }
    ctx->pc = 0x3B22CCu;
    // 0x3b22cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3b22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b22d0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x3b22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3b22d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b22d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b22dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b22e0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3b22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3b22e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b22e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b22e8: 0x8c634df0  lw          $v1, 0x4DF0($v1)
    ctx->pc = 0x3b22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19952)));
    // 0x3b22ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B22ECu;
    {
        const bool branch_taken_0x3b22ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B22ECu;
        // 0x3b22f0: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b22ec) {
            ctx->pc = 0x3B22FCu;
            goto label_3b22fc;
        }
    }
    ctx->pc = 0x3B22F4u;
    // 0x3b22f4: 0x0  nop
    ctx->pc = 0x3b22f4u;
    // NOP
label_3b22f8:
    // 0x3b22f8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3b22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_3b22fc:
    // 0x3b22fc: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3B22FCu;
    {
        const bool branch_taken_0x3b22fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b22fc) {
            ctx->pc = 0x3B2300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B22FCu;
            // 0x3b2300: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B232Cu;
            goto label_3b232c;
        }
    }
    ctx->pc = 0x3B2304u;
    // 0x3b2304: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b2304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b2308: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3b2308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3b230c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b230cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b2310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b2310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b2314: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b2314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b2318: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3b2318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3b231c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b231cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b2320: 0x8c634c68  lw          $v1, 0x4C68($v1)
    ctx->pc = 0x3b2320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19560)));
    // 0x3b2324: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b2324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3b2328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b232c:
    // 0x3b232c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b232cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b2330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b2330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2334: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2334u;
        // 0x3b2338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B233Cu;
    // 0x3b233c: 0x0  nop
    ctx->pc = 0x3b233cu;
    // NOP
    ctx->pc = 0x3b2340u;
}
