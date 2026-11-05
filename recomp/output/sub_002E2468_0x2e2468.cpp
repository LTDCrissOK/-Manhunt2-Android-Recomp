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

// Function: sub_002E2468
// Address: 0x2e2468 - 0x2e2520
void sub_002E2468_0x2e2468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2468_0x2e2468");
#endif

    switch (ctx->pc) {
        case 0x2e2478u: goto label_2e2478;
        case 0x2e24a8u: goto label_2e24a8;
        default: break;
    }

    ctx->pc = 0x2e2468u;

    // 0x2e2468: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e2468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e246c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e246cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2470: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x2e2470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2e2474: 0x24060031  addiu       $a2, $zero, 0x31
    ctx->pc = 0x2e2474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2e2478:
    // 0x2e2478: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2e2478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e247c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x2e247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e2480: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2e2480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2e2484: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2e2484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e2488: 0x4c1fffb  bgez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E2488u;
    {
        const bool branch_taken_0x2e2488 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2E248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2488u;
        // 0x2e248c: 0x43380b  movn        $a3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2488) {
            ctx->pc = 0x2E2478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2478;
        }
    }
    ctx->pc = 0x2E2490u;
    // 0x2e2490: 0x18e00020  blez        $a3, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E2490u;
    {
        const bool branch_taken_0x2e2490 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2E2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2490u;
        // 0x2e2494: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2490) {
            ctx->pc = 0x2E2514u;
            goto label_2e2514;
        }
    }
    ctx->pc = 0x2E2498u;
    // 0x2e2498: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x2e2498u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e249c: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x2e249cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2e24a0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2e24a0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24a4: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x2e24a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2e24a8:
    // 0x2e24a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e24ac: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2e24acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24b0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x2e24b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2e24b4: 0x28620032  slti        $v0, $v1, 0x32
    ctx->pc = 0x2e24b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2e24b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E24B8u;
    {
        const bool branch_taken_0x2e24b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24B8u;
        // 0x2e24bc: 0x6b2818  mult        $a1, $v1, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24b8) {
            ctx->pc = 0x2E24D8u;
            goto label_2e24d8;
        }
    }
    ctx->pc = 0x2E24C0u;
    // 0x2e24c0: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x2e24c0u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e24c4: 0x510c0001  beql        $t0, $t4, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E24C4u;
    {
        const bool branch_taken_0x2e24c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 12));
        if (branch_taken_0x2e24c4) {
            ctx->pc = 0x2E24C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E24C4u;
            // 0x2e24c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E24CCu;
            goto label_2e24cc;
        }
    }
    ctx->pc = 0x2E24CCu;
label_2e24cc:
    // 0x2e24cc: 0x1010  mfhi        $v0
    ctx->pc = 0x2e24ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e24d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e24d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24d4: 0x6b2818  mult        $a1, $v1, $t3
    ctx->pc = 0x2e24d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2e24d8:
    // 0x2e24d8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2e24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e24dc: 0x90430030  lbu         $v1, 0x30($v0)
    ctx->pc = 0x2e24dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2e24e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E24E0u;
    {
        const bool branch_taken_0x2e24e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24E0u;
        // 0x2e24e4: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24e0) {
            ctx->pc = 0x2E24F0u;
            goto label_2e24f0;
        }
    }
    ctx->pc = 0x2E24E8u;
    // 0x2e24e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E24E8u;
    {
        const bool branch_taken_0x2e24e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24E8u;
        // 0x2e24ec: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24e8) {
            ctx->pc = 0x2E24F4u;
            goto label_2e24f4;
        }
    }
    ctx->pc = 0x2E24F0u;
label_2e24f0:
    // 0x2e24f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e24f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e24f4:
    // 0x2e24f4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2e24f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e24f8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2e24f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e24fc: 0x0  nop
    ctx->pc = 0x2e24fcu;
    // NOP
    // 0x2e2500: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2500u;
    {
        const bool branch_taken_0x2e2500 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2500u;
        // 0x2e2504: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2500) {
            ctx->pc = 0x2E2514u;
            goto label_2e2514;
        }
    }
    ctx->pc = 0x2E2508u;
    // 0x2e2508: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x2e2508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2e250c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2E250Cu;
    {
        const bool branch_taken_0x2e250c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E250Cu;
        // 0x2e2510: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e250c) {
            ctx->pc = 0x2E24A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e24a8;
        }
    }
    ctx->pc = 0x2E2514u;
label_2e2514:
    // 0x2e2514: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2514u;
        // 0x2e2518: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E251Cu;
    // 0x2e251c: 0x0  nop
    ctx->pc = 0x2e251cu;
    // NOP
    ctx->pc = 0x2e2520u;
}
