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

// Function: sub_00155B78
// Address: 0x155b78 - 0x155c18
void sub_00155B78_0x155b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155B78_0x155b78");
#endif

    switch (ctx->pc) {
        case 0x155bacu: goto label_155bac;
        case 0x155bd8u: goto label_155bd8;
        case 0x155c04u: goto label_155c04;
        default: break;
    }

    ctx->pc = 0x155b78u;

    // 0x155b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155b7c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x155b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x155b80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155b84: 0x24420b88  addiu       $v0, $v0, 0xB88
    ctx->pc = 0x155b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2952));
    // 0x155b88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x155b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155b94: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x155b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x155b98: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x155b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x155b9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x155B9Cu;
    {
        const bool branch_taken_0x155b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x155BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B9Cu;
        // 0x155ba0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b9c) {
            ctx->pc = 0x155BACu;
            goto label_155bac;
        }
    }
    ctx->pc = 0x155BA4u;
    // 0x155ba4: 0xc05571a  jal         func_155C68
    ctx->pc = 0x155BA4u;
    SET_GPR_U32(ctx, 31, 0x155BACu);
    ctx->pc = 0x155C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155C68u, 0x155BA4u, 0x155BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BACu;
label_155bac:
    // 0x155bac: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x155bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x155bb0: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x155bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x155bb4: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x155bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
    // 0x155bb8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x155bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x155bbc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x155bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x155bc0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x155BC0u;
    {
        const bool branch_taken_0x155bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x155BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BC0u;
        // 0x155bc4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155bc0) {
            ctx->pc = 0x155BF0u;
            goto label_155bf0;
        }
    }
    ctx->pc = 0x155BC8u;
    // 0x155bc8: 0x26030410  addiu       $v1, $s0, 0x410
    ctx->pc = 0x155bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x155bcc: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x155BCCu;
    {
        const bool branch_taken_0x155bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x155bcc) {
            ctx->pc = 0x155BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155BCCu;
            // 0x155bd0: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155BF4u;
            goto label_155bf4;
        }
    }
    ctx->pc = 0x155BD4u;
    // 0x155bd4: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x155bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_155bd8:
    // 0x155bd8: 0x0  nop
    ctx->pc = 0x155bd8u;
    // NOP
    // 0x155bdc: 0x0  nop
    ctx->pc = 0x155bdcu;
    // NOP
    // 0x155be0: 0x0  nop
    ctx->pc = 0x155be0u;
    // NOP
    // 0x155be4: 0x0  nop
    ctx->pc = 0x155be4u;
    // NOP
    // 0x155be8: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x155BE8u;
    {
        const bool branch_taken_0x155be8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x155be8) {
            ctx->pc = 0x155BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155BE8u;
            // 0x155bec: 0x2463ffc0  addiu       $v1, $v1, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155bd8;
        }
    }
    ctx->pc = 0x155BF0u;
label_155bf0:
    // 0x155bf0: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x155bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_155bf4:
    // 0x155bf4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x155BF4u;
    {
        const bool branch_taken_0x155bf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x155BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BF4u;
        // 0x155bf8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155bf4) {
            ctx->pc = 0x155C04u;
            goto label_155c04;
        }
    }
    ctx->pc = 0x155BFCu;
    // 0x155bfc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x155BFCu;
    SET_GPR_U32(ctx, 31, 0x155C04u);
    ctx->pc = 0x155C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BFCu;
    // 0x155c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x155BFCu, 0x155C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C04u;
label_155c04:
    // 0x155c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155c08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155c0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155c10: 0x3e00008  jr          $ra
    ctx->pc = 0x155C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C10u;
        // 0x155c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155C18u;
}
