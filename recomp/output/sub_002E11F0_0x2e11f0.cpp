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

// Function: sub_002E11F0
// Address: 0x2e11f0 - 0x2e1270
void sub_002E11F0_0x2e11f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E11F0_0x2e11f0");
#endif

    switch (ctx->pc) {
        case 0x2e1220u: goto label_2e1220;
        case 0x2e123cu: goto label_2e123c;
        case 0x2e1260u: goto label_2e1260;
        default: break;
    }

    ctx->pc = 0x2e11f0u;

    // 0x2e11f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e11f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e11f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e11f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e11f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e11f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e11fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e11fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1200: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2e1200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2e1204: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x2e1204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2e1208: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1208u;
    {
        const bool branch_taken_0x2e1208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1208) {
            ctx->pc = 0x2E1218u;
            goto label_2e1218;
        }
    }
    ctx->pc = 0x2E1210u;
    // 0x2e1210: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e1210u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e1214: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2e1214u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2e1218:
    // 0x2e1218: 0xc0b76ba  jal         func_2DDAE8
    ctx->pc = 0x2E1218u;
    SET_GPR_U32(ctx, 31, 0x2E1220u);
    ctx->pc = 0x2E121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1218u;
    // 0x2e121c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDAE8u, 0x2E1218u, 0x2E1220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1220u;
label_2e1220:
    // 0x2e1220: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e1220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e1224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1228: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2e1228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2e122c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e122cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1230: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e1230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2e1234: 0xc0b7264  jal         func_2DC990
    ctx->pc = 0x2E1234u;
    SET_GPR_U32(ctx, 31, 0x2E123Cu);
    ctx->pc = 0x2E1238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1234u;
    // 0x2e1238: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2E1234u, 0x2E123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E123Cu;
label_2e123c:
    // 0x2e123c: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x2e123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1240: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1244: 0x0  nop
    ctx->pc = 0x2e1244u;
    // NOP
    // 0x2e1248: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e1248u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e124c: 0x0  nop
    ctx->pc = 0x2e124cu;
    // NOP
    // 0x2e1250: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1250u;
    {
        const bool branch_taken_0x2e1250 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1250) {
            ctx->pc = 0x2E1254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1250u;
            // 0x2e1254: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1264u;
            goto label_2e1264;
        }
    }
    ctx->pc = 0x2E1258u;
    // 0x2e1258: 0xc0998d8  jal         func_266360
    ctx->pc = 0x2E1258u;
    SET_GPR_U32(ctx, 31, 0x2E1260u);
    ctx->pc = 0x2E125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1258u;
    // 0x2e125c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266360u, 0x2E1258u, 0x2E1260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1260u;
label_2e1260:
    // 0x2e1260: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e1260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e1264:
    // 0x2e1264: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e1264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e1268: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1268u;
        // 0x2e126c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1270u;
}
