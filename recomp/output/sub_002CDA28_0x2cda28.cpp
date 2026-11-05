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

// Function: sub_002CDA28
// Address: 0x2cda28 - 0x2cdae8
void sub_002CDA28_0x2cda28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDA28_0x2cda28");
#endif

    switch (ctx->pc) {
        case 0x2cda3cu: goto label_2cda3c;
        default: break;
    }

    ctx->pc = 0x2cda28u;

    // 0x2cda28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cda28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cda2c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cda2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cda30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cda30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cda34: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x2CDA34u;
    SET_GPR_U32(ctx, 31, 0x2CDA3Cu);
    ctx->pc = 0x2CDA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDA34u;
    // 0x2cda38: 0x34843340  ori         $a0, $a0, 0x3340 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13120);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x2CDA34u, 0x2CDA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA3Cu;
label_2cda3c:
    // 0x2cda3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cda3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2cda40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2cda44: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CDA44u;
    {
        const bool branch_taken_0x2cda44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA44u;
        // 0x2cda48: 0xac43b4ac  sw          $v1, -0x4B54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948012), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda44) {
            ctx->pc = 0x2CDAD4u;
            goto label_2cdad4;
        }
    }
    ctx->pc = 0x2CDA4Cu;
    // 0x2cda4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2cda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2cda50: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2cda50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2cda54: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x2cda54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x2cda58: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2cda58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2cda5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2cda5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cda60: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2cda60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2cda64: 0xacc3b4a8  sw          $v1, -0x4B58($a2)
    ctx->pc = 0x2cda64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294948008), GPR_U32(ctx, 3));
    // 0x2cda68: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x2cda68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x2cda6c: 0xac600800  sw          $zero, 0x800($v1)
    ctx->pc = 0x2cda6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2048), GPR_U32(ctx, 0));
    // 0x2cda70: 0x3c090047  lui         $t1, 0x47
    ctx->pc = 0x2cda70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)71 << 16));
    // 0x2cda74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cda74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cda78: 0x8cc3b4a8  lw          $v1, -0x4B58($a2)
    ctx->pc = 0x2cda78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948008)));
    // 0x2cda7c: 0xac600804  sw          $zero, 0x804($v1)
    ctx->pc = 0x2cda7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2052), GPR_U32(ctx, 0));
    // 0x2cda80: 0x8cc4b4a8  lw          $a0, -0x4B58($a2)
    ctx->pc = 0x2cda80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948008)));
    // 0x2cda84: 0xac800808  sw          $zero, 0x808($a0)
    ctx->pc = 0x2cda84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2056), GPR_U32(ctx, 0));
    // 0x2cda88: 0x8cc3b4a8  lw          $v1, -0x4B58($a2)
    ctx->pc = 0x2cda88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948008)));
    // 0x2cda8c: 0xac60080c  sw          $zero, 0x80C($v1)
    ctx->pc = 0x2cda8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2060), GPR_U32(ctx, 0));
    // 0x2cda90: 0x8cc5b4a8  lw          $a1, -0x4B58($a2)
    ctx->pc = 0x2cda90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948008)));
    // 0x2cda94: 0xaca00810  sw          $zero, 0x810($a1)
    ctx->pc = 0x2cda94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2064), GPR_U32(ctx, 0));
    // 0x2cda98: 0x8cc4b4a8  lw          $a0, -0x4B58($a2)
    ctx->pc = 0x2cda98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948008)));
    // 0x2cda9c: 0x9105b4b0  lbu         $a1, -0x4B50($t0)
    ctx->pc = 0x2cda9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x3FB4B0u));
    // 0x2cdaa0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2cdaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2cdaa4: 0xac8530ac  sw          $a1, 0x30AC($a0)
    ctx->pc = 0x2cdaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12460), GPR_U32(ctx, 5));
    // 0x2cdaa8: 0x8cc3b4a8  lw          $v1, -0x4B58($a2)
    ctx->pc = 0x2cdaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948008)));
    // 0x2cdaac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2cdaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2cdab0: 0xac6032f0  sw          $zero, 0x32F0($v1)
    ctx->pc = 0x2cdab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13040), GPR_U32(ctx, 0));
    // 0x2cdab4: 0x8cc4b4a8  lw          $a0, -0x4B58($a2)
    ctx->pc = 0x2cdab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948008)));
    // 0x2cdab8: 0x8d250a40  lw          $a1, 0xA40($t1)
    ctx->pc = 0x2cdab8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x470A40u));
    // 0x2cdabc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2cdabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2cdac0: 0xac8530b4  sw          $a1, 0x30B4($a0)
    ctx->pc = 0x2cdac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12468), GPR_U32(ctx, 5));
    // 0x2cdac4: 0x8cc3b4a8  lw          $v1, -0x4B58($a2)
    ctx->pc = 0x2cdac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948008)));
    // 0x2cdac8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2cdac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2cdacc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CDACCu;
    {
        const bool branch_taken_0x2cdacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDACCu;
        // 0x2cdad0: 0xac6030b0  sw          $zero, 0x30B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdacc) {
            ctx->pc = 0x2CDAD8u;
            goto label_2cdad8;
        }
    }
    ctx->pc = 0x2CDAD4u;
label_2cdad4:
    // 0x2cdad4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cdad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cdad8:
    // 0x2cdad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cdad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdadc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDADCu;
        // 0x2cdae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDAE4u;
    // 0x2cdae4: 0x0  nop
    ctx->pc = 0x2cdae4u;
    // NOP
    ctx->pc = 0x2cdae8u;
}
