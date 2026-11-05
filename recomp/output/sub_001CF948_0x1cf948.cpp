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

// Function: sub_001CF948
// Address: 0x1cf948 - 0x1cf9d8
void sub_001CF948_0x1cf948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF948_0x1cf948");
#endif

    switch (ctx->pc) {
        case 0x1cf974u: goto label_1cf974;
        case 0x1cf9acu: goto label_1cf9ac;
        case 0x1cf9c4u: goto label_1cf9c4;
        default: break;
    }

    ctx->pc = 0x1cf948u;

    // 0x1cf948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf94c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1cf94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1cf950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf954: 0x244214a8  addiu       $v0, $v0, 0x14A8
    ctx->pc = 0x1cf954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5288));
    // 0x1cf958: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf960: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf964: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cf964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf968: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1cf968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1cf96c: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x1CF96Cu;
    SET_GPR_U32(ctx, 31, 0x1CF974u);
    ctx->pc = 0x1CF970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF96Cu;
    // 0x1cf970: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x1CF96Cu, 0x1CF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF974u;
label_1cf974:
    // 0x1cf974: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1cf974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cf978: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF978u;
    {
        const bool branch_taken_0x1cf978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf978) {
            ctx->pc = 0x1CF97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF978u;
            // 0x1cf97c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF98Cu;
            goto label_1cf98c;
        }
    }
    ctx->pc = 0x1CF980u;
    // 0x1cf980: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cf980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf984: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1cf984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1cf988: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cf988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf98c:
    // 0x1cf98c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF98Cu;
    {
        const bool branch_taken_0x1cf98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf98c) {
            ctx->pc = 0x1CF990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF98Cu;
            // 0x1cf990: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF9A0u;
            goto label_1cf9a0;
        }
    }
    ctx->pc = 0x1CF994u;
    // 0x1cf994: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cf994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cf998: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1cf998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1cf99c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1cf99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1cf9a0:
    // 0x1cf9a0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cf9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cf9a4: 0xc07493a  jal         func_1D24E8
    ctx->pc = 0x1CF9A4u;
    SET_GPR_U32(ctx, 31, 0x1CF9ACu);
    ctx->pc = 0x1CF9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF9A4u;
    // 0x1cf9a8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D24E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D24E8u, 0x1CF9A4u, 0x1CF9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF9ACu;
label_1cf9ac:
    // 0x1cf9ac: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1cf9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1cf9b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF9B0u;
    {
        const bool branch_taken_0x1cf9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9B0u;
        // 0x1cf9b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9b0) {
            ctx->pc = 0x1CF9C4u;
            goto label_1cf9c4;
        }
    }
    ctx->pc = 0x1CF9B8u;
    // 0x1cf9b8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1cf9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1cf9bc: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x1CF9BCu;
    SET_GPR_U32(ctx, 31, 0x1CF9C4u);
    ctx->pc = 0x1CF9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF9BCu;
    // 0x1cf9c0: 0x2484f1b0  addiu       $a0, $a0, -0xE50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x1CF9BCu, 0x1CF9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF9C4u;
label_1cf9c4:
    // 0x1cf9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf9c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf9cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9D0u;
        // 0x1cf9d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF9D8u;
}
