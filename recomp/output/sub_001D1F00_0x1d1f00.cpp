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

// Function: sub_001D1F00
// Address: 0x1d1f00 - 0x1d1fb8
void sub_001D1F00_0x1d1f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1F00_0x1d1f00");
#endif

    switch (ctx->pc) {
        case 0x1d1f40u: goto label_1d1f40;
        case 0x1d1f4cu: goto label_1d1f4c;
        case 0x1d1f64u: goto label_1d1f64;
        case 0x1d1f78u: goto label_1d1f78;
        case 0x1d1f84u: goto label_1d1f84;
        default: break;
    }

    ctx->pc = 0x1d1f00u;

    // 0x1d1f00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d1f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d1f04: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1d1f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1d1f08: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1d1f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1d1f0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d1f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f10: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1d1f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1d1f14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d1f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f18: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1d1f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1d1f1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d1f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f20: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1d1f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1d1f24: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1F24u;
    {
        const bool branch_taken_0x1d1f24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F24u;
        // 0x1d1f28: 0xffbf0098  sd          $ra, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f24) {
            ctx->pc = 0x1D1F40u;
            goto label_1d1f40;
        }
    }
    ctx->pc = 0x1D1F2Cu;
    // 0x1d1f2c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d1f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d1f30: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1d1f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d1f34: 0x24a5d2e8  addiu       $a1, $a1, -0x2D18
    ctx->pc = 0x1d1f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955752));
    // 0x1d1f38: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1D1F38u;
    SET_GPR_U32(ctx, 31, 0x1D1F40u);
    ctx->pc = 0x1D1F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F38u;
    // 0x1d1f3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1D1F38u, 0x1D1F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F40u;
label_1d1f40:
    // 0x1d1f40: 0xa6700008  sh          $s0, 0x8($s3)
    ctx->pc = 0x1d1f40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 16));
    // 0x1d1f44: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x1D1F44u;
    SET_GPR_U32(ctx, 31, 0x1D1F4Cu);
    ctx->pc = 0x1D1F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F44u;
    // 0x1d1f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x1D1F44u, 0x1D1F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F4Cu;
label_1d1f4c:
    // 0x1d1f4c: 0x86700008  lh          $s0, 0x8($s3)
    ctx->pc = 0x1d1f4cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d1f50: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d1f54: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x1d1f54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x1d1f58: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1d1f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d1f5c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1D1F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D1F64u);
    ctx->pc = 0x1D1F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F5Cu;
    // 0x1d1f60: 0x2612ffff  addiu       $s2, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1D1F5Cu, 0x1D1F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F64u;
label_1d1f64:
    // 0x1d1f64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d1f64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f68: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1F68u;
    {
        const bool branch_taken_0x1d1f68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F68u;
        // 0x1d1f6c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f68) {
            ctx->pc = 0x1D1F90u;
            goto label_1d1f90;
        }
    }
    ctx->pc = 0x1D1F70u;
    // 0x1d1f70: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1d1f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1f74: 0x0  nop
    ctx->pc = 0x1d1f74u;
    // NOP
label_1d1f78:
    // 0x1d1f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f7c: 0xc074f1c  jal         func_1D3C70
    ctx->pc = 0x1D1F7Cu;
    SET_GPR_U32(ctx, 31, 0x1D1F84u);
    ctx->pc = 0x1D1F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F7Cu;
    // 0x1d1f80: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C70u, 0x1D1F7Cu, 0x1D1F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F84u;
label_1d1f84:
    // 0x1d1f84: 0x0  nop
    ctx->pc = 0x1d1f84u;
    // NOP
    // 0x1d1f88: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D1F88u;
    {
        const bool branch_taken_0x1d1f88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F88u;
        // 0x1d1f8c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f88) {
            ctx->pc = 0x1D1F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1f78;
        }
    }
    ctx->pc = 0x1D1F90u;
label_1d1f90:
    // 0x1d1f90: 0xae74000c  sw          $s4, 0xC($s3)
    ctx->pc = 0x1d1f90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 20));
    // 0x1d1f94: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1d1f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d1f98: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1d1f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d1f9c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1d1f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d1fa0: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1d1fa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d1fa4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1d1fa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d1fa8: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1d1fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1d1fac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FACu;
        // 0x1d1fb0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1FB4u;
    // 0x1d1fb4: 0x0  nop
    ctx->pc = 0x1d1fb4u;
    // NOP
    ctx->pc = 0x1d1fb8u;
}
