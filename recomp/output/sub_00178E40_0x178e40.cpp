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

// Function: sub_00178E40
// Address: 0x178e40 - 0x178ed0
void sub_00178E40_0x178e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178E40_0x178e40");
#endif

    switch (ctx->pc) {
        case 0x178e78u: goto label_178e78;
        case 0x178ea0u: goto label_178ea0;
        default: break;
    }

    ctx->pc = 0x178e40u;

    // 0x178e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178e44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178e48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178e54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x178e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178e58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178e5c: 0x92020530  lbu         $v0, 0x530($s0)
    ctx->pc = 0x178e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x178e60: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x178E60u;
    {
        const bool branch_taken_0x178e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E60u;
        // 0x178e64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e60) {
            ctx->pc = 0x178EB4u;
            goto label_178eb4;
        }
    }
    ctx->pc = 0x178E68u;
    // 0x178e68: 0x24130028  addiu       $s3, $zero, 0x28
    ctx->pc = 0x178e68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x178e6c: 0x24120012  addiu       $s2, $zero, 0x12
    ctx->pc = 0x178e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x178e70: 0x92020531  lbu         $v0, 0x531($s0)
    ctx->pc = 0x178e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1329)));
    // 0x178e74: 0x0  nop
    ctx->pc = 0x178e74u;
    // NOP
label_178e78:
    // 0x178e78: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178E78u;
    {
        const bool branch_taken_0x178e78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x178E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E78u;
        // 0x178e7c: 0x2331018  mult        $v0, $s1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e78) {
            ctx->pc = 0x178EA0u;
            goto label_178ea0;
        }
    }
    ctx->pc = 0x178E80u;
    // 0x178e80: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x178e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x178e84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x178e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x178e88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178e8c: 0x50720005  beql        $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x178E8Cu;
    {
        const bool branch_taken_0x178e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x178e8c) {
            ctx->pc = 0x178E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178E8Cu;
            // 0x178e90: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178EA4u;
            goto label_178ea4;
        }
    }
    ctx->pc = 0x178E94u;
    // 0x178e94: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x178e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x178e98: 0xc05ec8a  jal         func_17B228
    ctx->pc = 0x178E98u;
    SET_GPR_U32(ctx, 31, 0x178EA0u);
    ctx->pc = 0x178E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E98u;
    // 0x178e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B228u, 0x178E98u, 0x178EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EA0u;
label_178ea0:
    // 0x178ea0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x178ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_178ea4:
    // 0x178ea4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x178ea4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x178ea8: 0x2e230014  sltiu       $v1, $s1, 0x14
    ctx->pc = 0x178ea8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x178eac: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x178EACu;
    {
        const bool branch_taken_0x178eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178eac) {
            ctx->pc = 0x178EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178EACu;
            // 0x178eb0: 0x92020531  lbu         $v0, 0x531($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1329)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178e78;
        }
    }
    ctx->pc = 0x178EB4u;
label_178eb4:
    // 0x178eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178eb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178eb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178ebc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178ebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178ec0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178ec0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178ec4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x178EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EC8u;
        // 0x178ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178ED0u;
}
