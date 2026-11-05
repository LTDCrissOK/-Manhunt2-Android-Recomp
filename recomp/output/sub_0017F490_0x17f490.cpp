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

// Function: sub_0017F490
// Address: 0x17f490 - 0x17f518
void sub_0017F490_0x17f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F490_0x17f490");
#endif

    switch (ctx->pc) {
        case 0x17f4b8u: goto label_17f4b8;
        case 0x17f4d8u: goto label_17f4d8;
        case 0x17f500u: goto label_17f500;
        default: break;
    }

    ctx->pc = 0x17f490u;

    // 0x17f490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f498: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f49c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f4a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f4a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F4A8u;
    {
        const bool branch_taken_0x17f4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4A8u;
        // 0x17f4ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4a8) {
            ctx->pc = 0x17F4B8u;
            goto label_17f4b8;
        }
    }
    ctx->pc = 0x17F4B0u;
    // 0x17f4b0: 0xc05fd5a  jal         func_17F568
    ctx->pc = 0x17F4B0u;
    SET_GPR_U32(ctx, 31, 0x17F4B8u);
    ctx->pc = 0x17F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F568u, 0x17F4B0u, 0x17F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4B8u;
label_17f4b8:
    // 0x17f4b8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x17f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17f4bc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17F4BCu;
    {
        const bool branch_taken_0x17f4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4BCu;
        // 0x17f4c0: 0x32250001  andi        $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4bc) {
            ctx->pc = 0x17F4F0u;
            goto label_17f4f0;
        }
    }
    ctx->pc = 0x17F4C4u;
    // 0x17f4c4: 0x26020410  addiu       $v0, $s0, 0x410
    ctx->pc = 0x17f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x17f4c8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F4C8u;
    {
        const bool branch_taken_0x17f4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17f4c8) {
            ctx->pc = 0x17F4F0u;
            goto label_17f4f0;
        }
    }
    ctx->pc = 0x17F4D0u;
    // 0x17f4d0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x17f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x17f4d4: 0x0  nop
    ctx->pc = 0x17f4d4u;
    // NOP
label_17f4d8:
    // 0x17f4d8: 0x0  nop
    ctx->pc = 0x17f4d8u;
    // NOP
    // 0x17f4dc: 0x0  nop
    ctx->pc = 0x17f4dcu;
    // NOP
    // 0x17f4e0: 0x0  nop
    ctx->pc = 0x17f4e0u;
    // NOP
    // 0x17f4e4: 0x0  nop
    ctx->pc = 0x17f4e4u;
    // NOP
    // 0x17f4e8: 0x5462fffb  bnel        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17F4E8u;
    {
        const bool branch_taken_0x17f4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17f4e8) {
            ctx->pc = 0x17F4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F4E8u;
            // 0x17f4ec: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f4d8;
        }
    }
    ctx->pc = 0x17F4F0u;
label_17f4f0:
    // 0x17f4f0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F4F0u;
    {
        const bool branch_taken_0x17f4f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f4f0) {
            ctx->pc = 0x17F4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F4F0u;
            // 0x17f4f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F504u;
            goto label_17f504;
        }
    }
    ctx->pc = 0x17F4F8u;
    // 0x17f4f8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x17F4F8u;
    SET_GPR_U32(ctx, 31, 0x17F500u);
    ctx->pc = 0x17F4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4F8u;
    // 0x17f4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x17F4F8u, 0x17F500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F500u;
label_17f500:
    // 0x17f500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f504:
    // 0x17f504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f50c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F50Cu;
        // 0x17f510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F514u;
    // 0x17f514: 0x0  nop
    ctx->pc = 0x17f514u;
    // NOP
    ctx->pc = 0x17f518u;
}
