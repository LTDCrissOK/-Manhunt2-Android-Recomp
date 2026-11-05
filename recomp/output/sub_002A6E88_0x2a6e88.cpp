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

// Function: sub_002A6E88
// Address: 0x2a6e88 - 0x2a6f80
void sub_002A6E88_0x2a6e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6E88_0x2a6e88");
#endif

    switch (ctx->pc) {
        case 0x2a6e88u: goto label_2a6e88;
        case 0x2a6e8cu: goto label_2a6e8c;
        case 0x2a6e90u: goto label_2a6e90;
        case 0x2a6e94u: goto label_2a6e94;
        case 0x2a6e98u: goto label_2a6e98;
        case 0x2a6e9cu: goto label_2a6e9c;
        case 0x2a6ea0u: goto label_2a6ea0;
        case 0x2a6ea4u: goto label_2a6ea4;
        case 0x2a6ea8u: goto label_2a6ea8;
        case 0x2a6eacu: goto label_2a6eac;
        case 0x2a6eb0u: goto label_2a6eb0;
        case 0x2a6eb4u: goto label_2a6eb4;
        case 0x2a6eb8u: goto label_2a6eb8;
        case 0x2a6ebcu: goto label_2a6ebc;
        case 0x2a6ec0u: goto label_2a6ec0;
        case 0x2a6ec4u: goto label_2a6ec4;
        case 0x2a6ec8u: goto label_2a6ec8;
        case 0x2a6eccu: goto label_2a6ecc;
        case 0x2a6ed0u: goto label_2a6ed0;
        case 0x2a6ed4u: goto label_2a6ed4;
        case 0x2a6ed8u: goto label_2a6ed8;
        case 0x2a6edcu: goto label_2a6edc;
        case 0x2a6ee0u: goto label_2a6ee0;
        case 0x2a6ee4u: goto label_2a6ee4;
        case 0x2a6ee8u: goto label_2a6ee8;
        case 0x2a6eecu: goto label_2a6eec;
        case 0x2a6ef0u: goto label_2a6ef0;
        case 0x2a6ef4u: goto label_2a6ef4;
        case 0x2a6ef8u: goto label_2a6ef8;
        case 0x2a6efcu: goto label_2a6efc;
        case 0x2a6f00u: goto label_2a6f00;
        case 0x2a6f04u: goto label_2a6f04;
        case 0x2a6f08u: goto label_2a6f08;
        case 0x2a6f0cu: goto label_2a6f0c;
        case 0x2a6f10u: goto label_2a6f10;
        case 0x2a6f14u: goto label_2a6f14;
        case 0x2a6f18u: goto label_2a6f18;
        case 0x2a6f1cu: goto label_2a6f1c;
        case 0x2a6f20u: goto label_2a6f20;
        case 0x2a6f24u: goto label_2a6f24;
        case 0x2a6f28u: goto label_2a6f28;
        case 0x2a6f2cu: goto label_2a6f2c;
        case 0x2a6f30u: goto label_2a6f30;
        case 0x2a6f34u: goto label_2a6f34;
        case 0x2a6f38u: goto label_2a6f38;
        case 0x2a6f3cu: goto label_2a6f3c;
        case 0x2a6f40u: goto label_2a6f40;
        case 0x2a6f44u: goto label_2a6f44;
        case 0x2a6f48u: goto label_2a6f48;
        case 0x2a6f4cu: goto label_2a6f4c;
        case 0x2a6f50u: goto label_2a6f50;
        case 0x2a6f54u: goto label_2a6f54;
        case 0x2a6f58u: goto label_2a6f58;
        case 0x2a6f5cu: goto label_2a6f5c;
        case 0x2a6f60u: goto label_2a6f60;
        case 0x2a6f64u: goto label_2a6f64;
        case 0x2a6f68u: goto label_2a6f68;
        case 0x2a6f6cu: goto label_2a6f6c;
        case 0x2a6f70u: goto label_2a6f70;
        case 0x2a6f74u: goto label_2a6f74;
        case 0x2a6f78u: goto label_2a6f78;
        case 0x2a6f7cu: goto label_2a6f7c;
        default: break;
    }

    ctx->pc = 0x2a6e88u;

label_2a6e88:
    // 0x2a6e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a6e8c:
    // 0x2a6e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a6e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2a6e90:
    // 0x2a6e90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a6e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a6e94:
    // 0x2a6e94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a6e98:
    // 0x2a6e98: 0xc0a1a9c  jal         func_286A70
label_2a6e9c:
    if (ctx->pc == 0x2A6E9Cu) {
        ctx->pc = 0x2A6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E98u;
        // 0x2a6e9c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6EA0u;
        goto label_2a6ea0;
    }
    ctx->pc = 0x2A6E98u;
    SET_GPR_U32(ctx, 31, 0x2A6EA0u);
    ctx->pc = 0x2A6E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6E98u;
    // 0x2a6e9c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A70u, 0x2A6E98u, 0x2A6EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EA0u;
label_2a6ea0:
    // 0x2a6ea0: 0x22027  nor         $a0, $zero, $v0
    ctx->pc = 0x2a6ea0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2a6ea4:
    // 0x2a6ea4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2a6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2a6ea8:
    // 0x2a6ea8: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x2a6ea8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2a6eac:
    // 0x2a6eac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a6eb0:
    if (ctx->pc == 0x2A6EB0u) {
        ctx->pc = 0x2A6EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EACu;
        // 0x2a6eb0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6EB4u;
        goto label_2a6eb4;
    }
    ctx->pc = 0x2A6EACu;
    {
        const bool branch_taken_0x2a6eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6eac) {
            ctx->pc = 0x2A6EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6EACu;
            // 0x2a6eb0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6EB4u;
            goto label_2a6eb4;
        }
    }
    ctx->pc = 0x2A6EB4u;
label_2a6eb4:
    // 0x2a6eb4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2a6eb4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2a6eb8:
    // 0x2a6eb8: 0x8e240294  lw          $a0, 0x294($s1)
    ctx->pc = 0x2a6eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
label_2a6ebc:
    // 0x2a6ebc: 0x1012  mflo        $v0
    ctx->pc = 0x2a6ebcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2a6ec0:
    // 0x2a6ec0: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
label_2a6ec4:
    if (ctx->pc == 0x2A6EC4u) {
        ctx->pc = 0x2A6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EC0u;
        // 0x2a6ec4: 0x442818  mult        $a1, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6EC8u;
        goto label_2a6ec8;
    }
    ctx->pc = 0x2A6EC0u;
    {
        const bool branch_taken_0x2a6ec0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EC0u;
        // 0x2a6ec4: 0x442818  mult        $a1, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ec0) {
            ctx->pc = 0x2A6ED4u;
            goto label_2a6ed4;
        }
    }
    ctx->pc = 0x2A6EC8u;
label_2a6ec8:
    // 0x2a6ec8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2a6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2a6ecc:
    // 0x2a6ecc: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2a6eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2a6ed0:
    // 0x2a6ed0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2a6ed0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_2a6ed4:
    // 0x2a6ed4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2a6ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2a6ed8:
    // 0x2a6ed8: 0x8e2302a8  lw          $v1, 0x2A8($s1)
    ctx->pc = 0x2a6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_2a6edc:
    // 0x2a6edc: 0x2442027c  addiu       $v0, $v0, 0x27C
    ctx->pc = 0x2a6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 636));
label_2a6ee0:
    // 0x2a6ee0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2a6ee4:
    if (ctx->pc == 0x2A6EE4u) {
        ctx->pc = 0x2A6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EE0u;
        // 0x2a6ee4: 0x2228021  addu        $s0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6EE8u;
        goto label_2a6ee8;
    }
    ctx->pc = 0x2A6EE0u;
    {
        const bool branch_taken_0x2a6ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EE0u;
        // 0x2a6ee4: 0x2228021  addu        $s0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ee0) {
            ctx->pc = 0x2A6EECu;
            goto label_2a6eec;
        }
    }
    ctx->pc = 0x2A6EE8u;
label_2a6ee8:
    // 0x2a6ee8: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x2a6ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
label_2a6eec:
    // 0x2a6eec: 0x8e2202ac  lw          $v0, 0x2AC($s1)
    ctx->pc = 0x2a6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
label_2a6ef0:
    // 0x2a6ef0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2a6ef4:
    if (ctx->pc == 0x2A6EF4u) {
        ctx->pc = 0x2A6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EF0u;
        // 0x2a6ef4: 0xac400048  sw          $zero, 0x48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6EF8u;
        goto label_2a6ef8;
    }
    ctx->pc = 0x2A6EF0u;
    {
        const bool branch_taken_0x2a6ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6ef0) {
            ctx->pc = 0x2A6EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6EF0u;
            // 0x2a6ef4: 0xac400048  sw          $zero, 0x48($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6EF8u;
            goto label_2a6ef8;
        }
    }
    ctx->pc = 0x2A6EF8u;
label_2a6ef8:
    // 0x2a6ef8: 0x8e22029c  lw          $v0, 0x29C($s1)
    ctx->pc = 0x2a6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
label_2a6efc:
    // 0x2a6efc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2a6f00:
    if (ctx->pc == 0x2A6F00u) {
        ctx->pc = 0x2A6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EFCu;
        // 0x2a6f00: 0xac400048  sw          $zero, 0x48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F04u;
        goto label_2a6f04;
    }
    ctx->pc = 0x2A6EFCu;
    {
        const bool branch_taken_0x2a6efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6efc) {
            ctx->pc = 0x2A6F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6EFCu;
            // 0x2a6f00: 0xac400048  sw          $zero, 0x48($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6F04u;
            goto label_2a6f04;
        }
    }
    ctx->pc = 0x2A6F04u;
label_2a6f04:
    // 0x2a6f04: 0xc0a9344  jal         func_2A4D10
label_2a6f08:
    if (ctx->pc == 0x2A6F08u) {
        ctx->pc = 0x2A6F0Cu;
        goto label_2a6f0c;
    }
    ctx->pc = 0x2A6F04u;
    SET_GPR_U32(ctx, 31, 0x2A6F0Cu);
    ctx->pc = 0x2A4D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4D10u, 0x2A6F04u, 0x2A6F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F0Cu;
label_2a6f0c:
    // 0x2a6f0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a6f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6f10:
    // 0x2a6f10: 0xc0a947e  jal         func_2A51F8
label_2a6f14:
    if (ctx->pc == 0x2A6F14u) {
        ctx->pc = 0x2A6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F10u;
        // 0x2a6f14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F18u;
        goto label_2a6f18;
    }
    ctx->pc = 0x2A6F10u;
    SET_GPR_U32(ctx, 31, 0x2A6F18u);
    ctx->pc = 0x2A6F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6F10u;
    // 0x2a6f14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51F8u, 0x2A6F10u, 0x2A6F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F18u;
label_2a6f18:
    // 0x2a6f18: 0xae220298  sw          $v0, 0x298($s1)
    ctx->pc = 0x2a6f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 2));
label_2a6f1c:
    // 0x2a6f1c: 0x8c5001ac  lw          $s0, 0x1AC($v0)
    ctx->pc = 0x2a6f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
label_2a6f20:
    // 0x2a6f20: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2a6f24:
    if (ctx->pc == 0x2A6F24u) {
        ctx->pc = 0x2A6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F20u;
        // 0x2a6f24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F28u;
        goto label_2a6f28;
    }
    ctx->pc = 0x2A6F20u;
    {
        const bool branch_taken_0x2a6f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F20u;
        // 0x2a6f24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f20) {
            ctx->pc = 0x2A6F64u;
            goto label_2a6f64;
        }
    }
    ctx->pc = 0x2A6F28u;
label_2a6f28:
    // 0x2a6f28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a6f2c:
    // 0x2a6f2c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a6f30:
    // 0x2a6f30: 0x40f809  jalr        $v0
label_2a6f34:
    if (ctx->pc == 0x2A6F34u) {
        ctx->pc = 0x2A6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F30u;
        // 0x2a6f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F38u;
        goto label_2a6f38;
    }
    ctx->pc = 0x2A6F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6F38u);
        ctx->pc = 0x2A6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F30u;
        // 0x2a6f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6F30u, 0x2A6F38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6F38u;
label_2a6f38:
    // 0x2a6f38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a6f3c:
    if (ctx->pc == 0x2A6F3Cu) {
        ctx->pc = 0x2A6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F38u;
        // 0x2a6f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F40u;
        goto label_2a6f40;
    }
    ctx->pc = 0x2A6F38u;
    {
        const bool branch_taken_0x2a6f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F38u;
        // 0x2a6f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f38) {
            ctx->pc = 0x2A6F50u;
            goto label_2a6f50;
        }
    }
    ctx->pc = 0x2A6F40u;
label_2a6f40:
    // 0x2a6f40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a6f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a6f44:
    // 0x2a6f44: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2a6f48:
    // 0x2a6f48: 0x40f809  jalr        $v0
label_2a6f4c:
    if (ctx->pc == 0x2A6F4Cu) {
        ctx->pc = 0x2A6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F48u;
        // 0x2a6f4c: 0x8e25029c  lw          $a1, 0x29C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F50u;
        goto label_2a6f50;
    }
    ctx->pc = 0x2A6F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6F50u);
        ctx->pc = 0x2A6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F48u;
        // 0x2a6f4c: 0x8e25029c  lw          $a1, 0x29C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6F48u, 0x2A6F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6F50u;
label_2a6f50:
    // 0x2a6f50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a6f54:
    // 0x2a6f54: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2a6f58:
    // 0x2a6f58: 0x40f809  jalr        $v0
label_2a6f5c:
    if (ctx->pc == 0x2A6F5Cu) {
        ctx->pc = 0x2A6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F58u;
        // 0x2a6f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F60u;
        goto label_2a6f60;
    }
    ctx->pc = 0x2A6F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6F60u);
        ctx->pc = 0x2A6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F58u;
        // 0x2a6f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6F58u, 0x2A6F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6F60u;
label_2a6f60:
    // 0x2a6f60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6f64:
    // 0x2a6f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a6f68:
    // 0x2a6f68: 0xa22202dd  sb          $v0, 0x2DD($s1)
    ctx->pc = 0x2a6f68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 733), (uint8_t)GPR_U32(ctx, 2));
label_2a6f6c:
    // 0x2a6f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a6f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a6f70:
    // 0x2a6f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a6f74:
    // 0x2a6f74: 0x3e00008  jr          $ra
label_2a6f78:
    if (ctx->pc == 0x2A6F78u) {
        ctx->pc = 0x2A6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F74u;
        // 0x2a6f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6F7Cu;
        goto label_2a6f7c;
    }
    ctx->pc = 0x2A6F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F74u;
        // 0x2a6f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6F7Cu;
label_2a6f7c:
    // 0x2a6f7c: 0x0  nop
    ctx->pc = 0x2a6f7cu;
    // NOP
    ctx->pc = 0x2a6f80u;
}
