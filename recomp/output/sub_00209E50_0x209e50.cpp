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

// Function: sub_00209E50
// Address: 0x209e50 - 0x209ee0
void sub_00209E50_0x209e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209E50_0x209e50");
#endif

    switch (ctx->pc) {
        case 0x209e84u: goto label_209e84;
        case 0x209ea4u: goto label_209ea4;
        case 0x209eacu: goto label_209eac;
        case 0x209ec8u: goto label_209ec8;
        default: break;
    }

    ctx->pc = 0x209e50u;

    // 0x209e50: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x209e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x209e54: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x209e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x209e58: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x209e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x209e5c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x209e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e60: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x209e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x209e64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x209e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e6c: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x209e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x209e70: 0xffbf0218  sd          $ra, 0x218($sp)
    ctx->pc = 0x209e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 31));
    // 0x209e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x209e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e78: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x209e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x209e7c: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x209E7Cu;
    SET_GPR_U32(ctx, 31, 0x209E84u);
    ctx->pc = 0x209E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E7Cu;
    // 0x209e80: 0xafb20004  sw          $s2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x209E7Cu, 0x209E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E84u;
label_209e84:
    // 0x209e84: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x209e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x209e88: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x209e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x209e8c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x209e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x209e90: 0xac7193dc  sw          $s1, -0x6C24($v1)
    ctx->pc = 0x209e90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3F93DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F93DCu, _value); } while (0);
    // 0x209e94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x209e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e98: 0xac5293e0  sw          $s2, -0x6C20($v0)
    ctx->pc = 0x209e98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3F93E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F93E0u, _value); } while (0);
    // 0x209e9c: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x209E9Cu;
    SET_GPR_U32(ctx, 31, 0x209EA4u);
    ctx->pc = 0x209EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E9Cu;
    // 0x209ea0: 0x248493e8  addiu       $a0, $a0, -0x6C18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x209E9Cu, 0x209EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EA4u;
label_209ea4:
    // 0x209ea4: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x209EA4u;
    SET_GPR_U32(ctx, 31, 0x209EACu);
    ctx->pc = 0x209EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EA4u;
    // 0x209ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x209EA4u, 0x209EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EACu;
label_209eac:
    // 0x209eac: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x209eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x209eb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209eb4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x209eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x209eb8: 0x24051007  addiu       $a1, $zero, 0x1007
    ctx->pc = 0x209eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4103));
    // 0x209ebc: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x209ebcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x209ec0: 0xc08271e  jal         func_209C78
    ctx->pc = 0x209EC0u;
    SET_GPR_U32(ctx, 31, 0x209EC8u);
    ctx->pc = 0x209EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EC0u;
    // 0x209ec4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C78u, 0x209EC0u, 0x209EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EC8u;
label_209ec8:
    // 0x209ec8: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x209ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x209ecc: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x209eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x209ed0: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x209ed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x209ed4: 0xdfbf0218  ld          $ra, 0x218($sp)
    ctx->pc = 0x209ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x209ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209ED8u;
        // 0x209edc: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209EE0u;
}
