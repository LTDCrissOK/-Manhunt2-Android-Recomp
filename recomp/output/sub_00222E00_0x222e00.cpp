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

// Function: sub_00222E00
// Address: 0x222e00 - 0x222fc8
void sub_00222E00_0x222e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222E00_0x222e00");
#endif

    switch (ctx->pc) {
        case 0x222e34u: goto label_222e34;
        case 0x222e48u: goto label_222e48;
        case 0x222e54u: goto label_222e54;
        case 0x222e64u: goto label_222e64;
        case 0x222e84u: goto label_222e84;
        case 0x222ea8u: goto label_222ea8;
        case 0x222eccu: goto label_222ecc;
        case 0x222ef0u: goto label_222ef0;
        case 0x222f18u: goto label_222f18;
        case 0x222f24u: goto label_222f24;
        case 0x222f38u: goto label_222f38;
        case 0x222f4cu: goto label_222f4c;
        case 0x222f64u: goto label_222f64;
        case 0x222f78u: goto label_222f78;
        case 0x222f90u: goto label_222f90;
        case 0x222facu: goto label_222fac;
        default: break;
    }

    ctx->pc = 0x222e00u;

    // 0x222e00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x222e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x222e04: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x222e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x222e08: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x222e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x222e0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x222e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e10: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x222e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x222e14: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x222e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x222e18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e1c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222e20: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x222e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x222e24: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x222e24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x222e28: 0x24a51850  addiu       $a1, $a1, 0x1850
    ctx->pc = 0x222e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6224));
    // 0x222e2c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222E2Cu;
    SET_GPR_U32(ctx, 31, 0x222E34u);
    ctx->pc = 0x222E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E2Cu;
    // 0x222e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222E2Cu, 0x222E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E34u;
label_222e34:
    // 0x222e34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222e38: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x222E38u;
    {
        const bool branch_taken_0x222e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222e38) {
            ctx->pc = 0x222E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222E38u;
            // 0x222e3c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222F2Cu;
            goto label_222f2c;
        }
    }
    ctx->pc = 0x222E40u;
    // 0x222e40: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x222E40u;
    SET_GPR_U32(ctx, 31, 0x222E48u);
    ctx->pc = 0x222E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E40u;
    // 0x222e44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x222E40u, 0x222E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E48u;
label_222e48:
    // 0x222e48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x222e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e4c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222E4Cu;
    SET_GPR_U32(ctx, 31, 0x222E54u);
    ctx->pc = 0x222E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E4Cu;
    // 0x222e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222E4Cu, 0x222E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E54u;
label_222e54:
    // 0x222e54: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222e58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e5c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222E5Cu;
    SET_GPR_U32(ctx, 31, 0x222E64u);
    ctx->pc = 0x222E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E5Cu;
    // 0x222e60: 0x24a533a8  addiu       $a1, $a1, 0x33A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222E5Cu, 0x222E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E64u;
label_222e64:
    // 0x222e64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222e68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222E68u;
    {
        const bool branch_taken_0x222e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E68u;
        // 0x222e6c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e68) {
            ctx->pc = 0x222E78u;
            goto label_222e78;
        }
    }
    ctx->pc = 0x222E70u;
    // 0x222e70: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x222E70u;
    {
        const bool branch_taken_0x222e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E70u;
        // 0x222e74: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e70) {
            ctx->pc = 0x222F18u;
            goto label_222f18;
        }
    }
    ctx->pc = 0x222E78u;
label_222e78:
    // 0x222e78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e7c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222E7Cu;
    SET_GPR_U32(ctx, 31, 0x222E84u);
    ctx->pc = 0x222E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E7Cu;
    // 0x222e80: 0x24a533b8  addiu       $a1, $a1, 0x33B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222E7Cu, 0x222E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E84u;
label_222e84:
    // 0x222e84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222e88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222E88u;
    {
        const bool branch_taken_0x222e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E88u;
        // 0x222e8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e88) {
            ctx->pc = 0x222E98u;
            goto label_222e98;
        }
    }
    ctx->pc = 0x222E90u;
    // 0x222e90: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x222E90u;
    {
        const bool branch_taken_0x222e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E90u;
        // 0x222e94: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e90) {
            ctx->pc = 0x222F18u;
            goto label_222f18;
        }
    }
    ctx->pc = 0x222E98u;
label_222e98:
    // 0x222e98: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222e9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ea0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222EA0u;
    SET_GPR_U32(ctx, 31, 0x222EA8u);
    ctx->pc = 0x222EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222EA0u;
    // 0x222ea4: 0x24a533c8  addiu       $a1, $a1, 0x33C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222EA0u, 0x222EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222EA8u;
label_222ea8:
    // 0x222ea8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222eac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222EACu;
    {
        const bool branch_taken_0x222eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EACu;
        // 0x222eb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222eac) {
            ctx->pc = 0x222EBCu;
            goto label_222ebc;
        }
    }
    ctx->pc = 0x222EB4u;
    // 0x222eb4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x222EB4u;
    {
        const bool branch_taken_0x222eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EB4u;
        // 0x222eb8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222eb4) {
            ctx->pc = 0x222F18u;
            goto label_222f18;
        }
    }
    ctx->pc = 0x222EBCu;
label_222ebc:
    // 0x222ebc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222ec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ec4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222EC4u;
    SET_GPR_U32(ctx, 31, 0x222ECCu);
    ctx->pc = 0x222EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222EC4u;
    // 0x222ec8: 0x24a533d8  addiu       $a1, $a1, 0x33D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222EC4u, 0x222ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222ECCu;
label_222ecc:
    // 0x222ecc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222ed0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222ED0u;
    {
        const bool branch_taken_0x222ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222ED0u;
        // 0x222ed4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ed0) {
            ctx->pc = 0x222EE0u;
            goto label_222ee0;
        }
    }
    ctx->pc = 0x222ED8u;
    // 0x222ed8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x222ED8u;
    {
        const bool branch_taken_0x222ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222ED8u;
        // 0x222edc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ed8) {
            ctx->pc = 0x222F18u;
            goto label_222f18;
        }
    }
    ctx->pc = 0x222EE0u;
label_222ee0:
    // 0x222ee0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222ee4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ee8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222EE8u;
    SET_GPR_U32(ctx, 31, 0x222EF0u);
    ctx->pc = 0x222EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222EE8u;
    // 0x222eec: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222EE8u, 0x222EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222EF0u;
label_222ef0:
    // 0x222ef0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222ef4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222EF4u;
    {
        const bool branch_taken_0x222ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EF4u;
        // 0x222ef8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ef4) {
            ctx->pc = 0x222F04u;
            goto label_222f04;
        }
    }
    ctx->pc = 0x222EFCu;
    // 0x222efc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x222EFCu;
    {
        const bool branch_taken_0x222efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EFCu;
        // 0x222f00: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222efc) {
            ctx->pc = 0x222F18u;
            goto label_222f18;
        }
    }
    ctx->pc = 0x222F04u;
label_222f04:
    // 0x222f04: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222f08: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x222f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222f0c: 0x24a533f0  addiu       $a1, $a1, 0x33F0
    ctx->pc = 0x222f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13296));
    // 0x222f10: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x222F10u;
    SET_GPR_U32(ctx, 31, 0x222F18u);
    ctx->pc = 0x222F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F10u;
    // 0x222f14: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x222F10u, 0x222F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F18u;
label_222f18:
    // 0x222f18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f1c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x222F1Cu;
    SET_GPR_U32(ctx, 31, 0x222F24u);
    ctx->pc = 0x222F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F1Cu;
    // 0x222f20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x222F1Cu, 0x222F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F24u;
label_222f24:
    // 0x222f24: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x222F24u;
    {
        const bool branch_taken_0x222f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F24u;
        // 0x222f28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f24) {
            ctx->pc = 0x222FB0u;
            goto label_222fb0;
        }
    }
    ctx->pc = 0x222F2Cu;
label_222f2c:
    // 0x222f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f30: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222F30u;
    SET_GPR_U32(ctx, 31, 0x222F38u);
    ctx->pc = 0x222F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F30u;
    // 0x222f34: 0x24a53410  addiu       $a1, $a1, 0x3410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222F30u, 0x222F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F38u;
label_222f38:
    // 0x222f38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222f3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222F3Cu;
    {
        const bool branch_taken_0x222f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F3Cu;
        // 0x222f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f3c) {
            ctx->pc = 0x222F54u;
            goto label_222f54;
        }
    }
    ctx->pc = 0x222F44u;
    // 0x222f44: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222F44u;
    SET_GPR_U32(ctx, 31, 0x222F4Cu);
    ctx->pc = 0x222F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F44u;
    // 0x222f48: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222F44u, 0x222F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F4Cu;
label_222f4c:
    // 0x222f4c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x222F4Cu;
    {
        const bool branch_taken_0x222f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F4Cu;
        // 0x222f50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f4c) {
            ctx->pc = 0x222FB0u;
            goto label_222fb0;
        }
    }
    ctx->pc = 0x222F54u;
label_222f54:
    // 0x222f54: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f5c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222F5Cu;
    SET_GPR_U32(ctx, 31, 0x222F64u);
    ctx->pc = 0x222F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F5Cu;
    // 0x222f60: 0x24a53420  addiu       $a1, $a1, 0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222F5Cu, 0x222F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F64u;
label_222f64:
    // 0x222f64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222f68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222F68u;
    {
        const bool branch_taken_0x222f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F68u;
        // 0x222f6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f68) {
            ctx->pc = 0x222F80u;
            goto label_222f80;
        }
    }
    ctx->pc = 0x222F70u;
    // 0x222f70: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222F70u;
    SET_GPR_U32(ctx, 31, 0x222F78u);
    ctx->pc = 0x222F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F70u;
    // 0x222f74: 0x26250014  addiu       $a1, $s1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222F70u, 0x222F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F78u;
label_222f78:
    // 0x222f78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x222F78u;
    {
        const bool branch_taken_0x222f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F78u;
        // 0x222f7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f78) {
            ctx->pc = 0x222FB0u;
            goto label_222fb0;
        }
    }
    ctx->pc = 0x222F80u;
label_222f80:
    // 0x222f80: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f88: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222F88u;
    SET_GPR_U32(ctx, 31, 0x222F90u);
    ctx->pc = 0x222F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F88u;
    // 0x222f8c: 0x24a53430  addiu       $a1, $a1, 0x3430 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222F88u, 0x222F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F90u;
label_222f90:
    // 0x222f90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222f94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222F94u;
    {
        const bool branch_taken_0x222f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F94u;
        // 0x222f98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f94) {
            ctx->pc = 0x222FA4u;
            goto label_222fa4;
        }
    }
    ctx->pc = 0x222F9Cu;
    // 0x222f9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x222F9Cu;
    {
        const bool branch_taken_0x222f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F9Cu;
        // 0x222fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f9c) {
            ctx->pc = 0x222FB0u;
            goto label_222fb0;
        }
    }
    ctx->pc = 0x222FA4u;
label_222fa4:
    // 0x222fa4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222FA4u;
    SET_GPR_U32(ctx, 31, 0x222FACu);
    ctx->pc = 0x222FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222FA4u;
    // 0x222fa8: 0x2625001c  addiu       $a1, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222FA4u, 0x222FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222FACu;
label_222fac:
    // 0x222fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222fb0:
    // 0x222fb0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x222fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x222fb4: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x222fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x222fb8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x222fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x222fbc: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x222fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x222fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x222FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FC0u;
        // 0x222fc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222FC8u;
}
