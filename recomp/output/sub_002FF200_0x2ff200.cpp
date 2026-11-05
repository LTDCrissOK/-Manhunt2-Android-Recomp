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

// Function: sub_002FF200
// Address: 0x2ff200 - 0x2ff2b8
void sub_002FF200_0x2ff200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF200_0x2ff200");
#endif

    switch (ctx->pc) {
        case 0x2ff2a0u: goto label_2ff2a0;
        default: break;
    }

    ctx->pc = 0x2ff200u;

    // 0x2ff200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ff200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ff204: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ff204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ff208: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2ff208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2ff20c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF20Cu;
    {
        const bool branch_taken_0x2ff20c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF20Cu;
        // 0x2ff210: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff20c) {
            ctx->pc = 0x2FF224u;
            goto label_2ff224;
        }
    }
    ctx->pc = 0x2FF214u;
    // 0x2ff214: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2ff214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2ff218: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2ff218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ff21c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF21Cu;
    {
        const bool branch_taken_0x2ff21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF21Cu;
        // 0x2ff220: 0xac62d2d0  sw          $v0, -0x2D30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294955728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff21c) {
            ctx->pc = 0x2FF22Cu;
            goto label_2ff22c;
        }
    }
    ctx->pc = 0x2FF224u;
label_2ff224:
    // 0x2ff224: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ff224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ff228: 0xac40d2d0  sw          $zero, -0x2D30($v0)
    ctx->pc = 0x2ff228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD2D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2D0u, _value); } while (0);
label_2ff22c:
    // 0x2ff22c: 0x8c8302e0  lw          $v1, 0x2E0($a0)
    ctx->pc = 0x2ff22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x2ff230: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x2ff230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x2ff234: 0x8e112b98  lw          $s1, 0x2B98($s0)
    ctx->pc = 0x2ff234u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x482B98u));
    // 0x2ff238: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2ff238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ff23c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ff23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff240: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2ff240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2ff244: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ff244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff248: 0xae032b98  sw          $v1, 0x2B98($s0)
    ctx->pc = 0x2ff248u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x482B98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B98u, _value); } while (0);
    // 0x2ff24c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ff24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff250: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2ff250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2ff254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff258: 0xe4510004  swc1        $f17, 0x4($v0)
    ctx->pc = 0x2ff258u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ff25c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ff25cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ff260: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2ff260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2ff264: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2ff264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff268: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2ff268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2ff26c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ff26cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff270: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x2ff270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2ff274: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2ff274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff278: 0xc48e02e8  lwc1        $f14, 0x2E8($a0)
    ctx->pc = 0x2ff278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ff27c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2ff27cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff280: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ff280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ff284: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x2ff284u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ff288: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ff288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ff28c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2ff28cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2ff290: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2ff290u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x2ff294: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2ff294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2ff298: 0xc0cf430  jal         func_33D0C0
    ctx->pc = 0x2FF298u;
    SET_GPR_U32(ctx, 31, 0x2FF2A0u);
    ctx->pc = 0x2FF29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF298u;
    // 0x2ff29c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x2FF298u, 0x2FF2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF2A0u;
label_2ff2a0:
    // 0x2ff2a0: 0xae112b98  sw          $s1, 0x2B98($s0)
    ctx->pc = 0x2ff2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11160), GPR_U32(ctx, 17));
    // 0x2ff2a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ff2a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ff2a8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ff2a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ff2ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ff2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ff2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2B0u;
        // 0x2ff2b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF2B8u;
}
