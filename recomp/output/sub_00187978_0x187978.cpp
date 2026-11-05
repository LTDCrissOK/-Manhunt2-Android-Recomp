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

// Function: sub_00187978
// Address: 0x187978 - 0x187a00
void sub_00187978_0x187978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187978_0x187978");
#endif

    switch (ctx->pc) {
        case 0x187978u: goto label_187978;
        case 0x18797cu: goto label_18797c;
        case 0x187980u: goto label_187980;
        case 0x187984u: goto label_187984;
        case 0x187988u: goto label_187988;
        case 0x18798cu: goto label_18798c;
        case 0x187990u: goto label_187990;
        case 0x187994u: goto label_187994;
        case 0x187998u: goto label_187998;
        case 0x18799cu: goto label_18799c;
        case 0x1879a0u: goto label_1879a0;
        case 0x1879a4u: goto label_1879a4;
        case 0x1879a8u: goto label_1879a8;
        case 0x1879acu: goto label_1879ac;
        case 0x1879b0u: goto label_1879b0;
        case 0x1879b4u: goto label_1879b4;
        case 0x1879b8u: goto label_1879b8;
        case 0x1879bcu: goto label_1879bc;
        case 0x1879c0u: goto label_1879c0;
        case 0x1879c4u: goto label_1879c4;
        case 0x1879c8u: goto label_1879c8;
        case 0x1879ccu: goto label_1879cc;
        case 0x1879d0u: goto label_1879d0;
        case 0x1879d4u: goto label_1879d4;
        case 0x1879d8u: goto label_1879d8;
        case 0x1879dcu: goto label_1879dc;
        case 0x1879e0u: goto label_1879e0;
        case 0x1879e4u: goto label_1879e4;
        case 0x1879e8u: goto label_1879e8;
        case 0x1879ecu: goto label_1879ec;
        case 0x1879f0u: goto label_1879f0;
        case 0x1879f4u: goto label_1879f4;
        case 0x1879f8u: goto label_1879f8;
        case 0x1879fcu: goto label_1879fc;
        default: break;
    }

    ctx->pc = 0x187978u;

label_187978:
    // 0x187978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18797c:
    // 0x18797c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187980:
    // 0x187980: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_187984:
    // 0x187984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187988:
    // 0x187988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18798c:
    // 0x18798c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_187990:
    // 0x187990: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_187994:
    if (ctx->pc == 0x187994u) {
        ctx->pc = 0x187994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187990u;
        // 0x187994: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187998u;
        goto label_187998;
    }
    ctx->pc = 0x187990u;
    {
        const bool branch_taken_0x187990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187990u;
        // 0x187994: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187990) {
            ctx->pc = 0x1879A8u;
            goto label_1879a8;
        }
    }
    ctx->pc = 0x187998u;
label_187998:
    // 0x187998: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x187998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18799c:
    // 0x18799c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1879a0:
    // 0x1879a0: 0x40f809  jalr        $v0
label_1879a4:
    if (ctx->pc == 0x1879A4u) {
        ctx->pc = 0x1879A8u;
        goto label_1879a8;
    }
    ctx->pc = 0x1879A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1879A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1879A0u, 0x1879A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1879A8u;
label_1879a8:
    // 0x1879a8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1879a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1879ac:
    // 0x1879ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1879b0:
    if (ctx->pc == 0x1879B0u) {
        ctx->pc = 0x1879B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879ACu;
        // 0x1879b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1879B4u;
        goto label_1879b4;
    }
    ctx->pc = 0x1879ACu;
    {
        const bool branch_taken_0x1879ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1879B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879ACu;
        // 0x1879b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879ac) {
            ctx->pc = 0x1879D4u;
            goto label_1879d4;
        }
    }
    ctx->pc = 0x1879B4u;
label_1879b4:
    // 0x1879b4: 0xc0f5240  jal         func_3D4900
label_1879b8:
    if (ctx->pc == 0x1879B8u) {
        ctx->pc = 0x1879B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879B4u;
        // 0x1879b8: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1879BCu;
        goto label_1879bc;
    }
    ctx->pc = 0x1879B4u;
    SET_GPR_U32(ctx, 31, 0x1879BCu);
    ctx->pc = 0x1879B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879B4u;
    // 0x1879b8: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1879B4u, 0x1879BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879BCu;
label_1879bc:
    // 0x1879bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1879bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1879c0:
    // 0x1879c0: 0xc0635bc  jal         func_18D6F0
label_1879c4:
    if (ctx->pc == 0x1879C4u) {
        ctx->pc = 0x1879C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879C0u;
        // 0x1879c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1879C8u;
        goto label_1879c8;
    }
    ctx->pc = 0x1879C0u;
    SET_GPR_U32(ctx, 31, 0x1879C8u);
    ctx->pc = 0x1879C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879C0u;
    // 0x1879c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D6F0u, 0x1879C0u, 0x1879C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879C8u;
label_1879c8:
    // 0x1879c8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1879c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1879cc:
    // 0x1879cc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1879ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1879d0:
    // 0x1879d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1879d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1879d4:
    // 0x1879d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1879d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1879d8:
    // 0x1879d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1879d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1879dc:
    // 0x1879dc: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x1879dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1879e0:
    // 0x1879e0: 0xc0f809  jalr        $a2
label_1879e4:
    if (ctx->pc == 0x1879E4u) {
        ctx->pc = 0x1879E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879E0u;
        // 0x1879e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1879E8u;
        goto label_1879e8;
    }
    ctx->pc = 0x1879E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1879E8u);
        ctx->pc = 0x1879E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879E0u;
        // 0x1879e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1879E0u, 0x1879E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1879E8u;
label_1879e8:
    // 0x1879e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1879e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1879ec:
    // 0x1879ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1879ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1879f0:
    // 0x1879f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1879f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1879f4:
    // 0x1879f4: 0x3e00008  jr          $ra
label_1879f8:
    if (ctx->pc == 0x1879F8u) {
        ctx->pc = 0x1879F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879F4u;
        // 0x1879f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1879FCu;
        goto label_1879fc;
    }
    ctx->pc = 0x1879F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1879F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879F4u;
        // 0x1879f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1879F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1879FCu;
label_1879fc:
    // 0x1879fc: 0x0  nop
    ctx->pc = 0x1879fcu;
    // NOP
    ctx->pc = 0x187a00u;
}
