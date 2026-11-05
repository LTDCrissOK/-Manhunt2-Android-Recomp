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

// Function: sub_003E18B8
// Address: 0x3e18b8 - 0x3e1950
void sub_003E18B8_0x3e18b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E18B8_0x3e18b8");
#endif

    switch (ctx->pc) {
        case 0x3e18e4u: goto label_3e18e4;
        case 0x3e1904u: goto label_3e1904;
        default: break;
    }

    ctx->pc = 0x3e18b8u;

    // 0x3e18b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e18b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e18bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e18bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e18c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e18c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e18c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e18c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e18c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e18c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e18cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e18ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3e18d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e18d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E18D4u;
    {
        const bool branch_taken_0x3e18d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E18D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18D4u;
        // 0x3e18d8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e18d4) {
            ctx->pc = 0x3E18F8u;
            goto label_3e18f8;
        }
    }
    ctx->pc = 0x3E18DCu;
    // 0x3e18dc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E18DCu;
    SET_GPR_U32(ctx, 31, 0x3E18E4u);
    ctx->pc = 0x3E18E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E18DCu;
    // 0x3e18e0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E18DCu, 0x3E18E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E18E4u;
label_3e18e4:
    // 0x3e18e4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3e18e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3e18e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3e18e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3e18ec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3e18ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3e18f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3E18F0u;
    {
        const bool branch_taken_0x3e18f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18F0u;
        // 0x3e18f4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e18f0) {
            ctx->pc = 0x3E1914u;
            goto label_3e1914;
        }
    }
    ctx->pc = 0x3E18F8u;
label_3e18f8:
    // 0x3e18f8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3e18f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e18fc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E18FCu;
    SET_GPR_U32(ctx, 31, 0x3E1904u);
    ctx->pc = 0x3E1900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E18FCu;
    // 0x3e1900: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E18FCu, 0x3E1904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1904u;
label_3e1904:
    // 0x3e1904: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3e1904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3e1908: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3e1908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3e190c: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3e190cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3e1910: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3e1910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3e1914:
    // 0x3e1914: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e1914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e1918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e1918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e191c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3e191cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3e1920: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e1920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1924: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e1924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e1928: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e1928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e192c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e192cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e1930: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e1930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e1934: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3e1934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3e1938: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e1938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e193c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E193Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E193Cu;
        // 0x3e1940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E193Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1944u;
    // 0x3e1944: 0x0  nop
    ctx->pc = 0x3e1944u;
    // NOP
    // 0x3e1948: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3e1948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e194c: 0x0  nop
    ctx->pc = 0x3e194cu;
    // NOP
    ctx->pc = 0x3e1950u;
}
