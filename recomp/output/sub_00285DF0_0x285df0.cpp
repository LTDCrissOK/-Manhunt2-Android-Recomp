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

// Function: sub_00285DF0
// Address: 0x285df0 - 0x285f18
void sub_00285DF0_0x285df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285DF0_0x285df0");
#endif

    ctx->pc = 0x285df0u;

    // 0x285df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285df4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x285df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x285df8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x285dfc: 0x2463bf78  addiu       $v1, $v1, -0x4088
    ctx->pc = 0x285dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950776));
    // 0x285e00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x285e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x285e04: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x285e04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x285e08: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x285e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x285e0c: 0x24680004  addiu       $t0, $v1, 0x4
    ctx->pc = 0x285e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x285e10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x285e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x285e14: 0x2469000c  addiu       $t1, $v1, 0xC
    ctx->pc = 0x285e14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x285e18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x285e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x285e1c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x285e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x285e20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x285e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x285e24: 0x835021  addu        $t2, $a0, $v1
    ctx->pc = 0x285e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x285e28: 0x8d510000  lw          $s1, 0x0($t2)
    ctx->pc = 0x285e28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x285e2c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x285e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x285e30: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x285e30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x285e34: 0x897021  addu        $t6, $a0, $t1
    ctx->pc = 0x285e34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x285e38: 0xa97821  addu        $t7, $a1, $t1
    ctx->pc = 0x285e38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x285e3c: 0x885821  addu        $t3, $a0, $t0
    ctx->pc = 0x285e3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x285e40: 0xa36021  addu        $t4, $a1, $v1
    ctx->pc = 0x285e40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x285e44: 0xa86821  addu        $t5, $a1, $t0
    ctx->pc = 0x285e44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x285e48: 0x8d8a0000  lw          $t2, 0x0($t4)
    ctx->pc = 0x285e48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x285e4c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x285e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x285e50: 0xe38021  addu        $s0, $a3, $v1
    ctx->pc = 0x285e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x285e54: 0xe9a821  addu        $s5, $a3, $t1
    ctx->pc = 0x285e54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x285e58: 0xe8a021  addu        $s4, $a3, $t0
    ctx->pc = 0x285e58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x285e5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x285e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x285e60: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x285e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x285e64: 0x8d730000  lw          $s3, 0x0($t3)
    ctx->pc = 0x285e64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x285e68: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x285e68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x285e6c: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x285e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x285e70: 0x8cac0000  lw          $t4, 0x0($a1)
    ctx->pc = 0x285e70u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x285e74: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x285e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x285e78: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x285e78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x285e7c: 0x8dc40000  lw          $a0, 0x0($t6)
    ctx->pc = 0x285e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x285e80: 0x8dab0000  lw          $t3, 0x0($t5)
    ctx->pc = 0x285e80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x285e84: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x285e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x285e88: 0x8de50000  lw          $a1, 0x0($t7)
    ctx->pc = 0x285e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x285e8c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x285e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x285e90: 0x8c6d0000  lw          $t5, 0x0($v1)
    ctx->pc = 0x285e90u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x285e94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x285e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x285e98: 0x8d0e0000  lw          $t6, 0x0($t0)
    ctx->pc = 0x285e98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x285e9c: 0x2442aff0  addiu       $v0, $v0, -0x5010
    ctx->pc = 0x285e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
    // 0x285ea0: 0x8ccf0000  lw          $t7, 0x0($a2)
    ctx->pc = 0x285ea0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x285ea4: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x285ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x285ea8: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x285ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285eac: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x285eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x285eb0: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x285eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x285eb4: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x285eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x285eb8: 0xac510020  sw          $s1, 0x20($v0)
    ctx->pc = 0x285eb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x6BB010u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB010u, _value); } while (0);
    // 0x285ebc: 0xac530024  sw          $s3, 0x24($v0)
    ctx->pc = 0x285ebcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x6BB014u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB014u, _value); } while (0);
    // 0x285ec0: 0xac520028  sw          $s2, 0x28($v0)
    ctx->pc = 0x285ec0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x6BB018u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB018u, _value); } while (0);
    // 0x285ec4: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x285ec4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BB04Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB04Cu, _value); } while (0);
    // 0x285ec8: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x285ec8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BB01Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB01Cu, _value); } while (0);
    // 0x285ecc: 0xac4a0030  sw          $t2, 0x30($v0)
    ctx->pc = 0x285eccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6BB020u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB020u, _value); } while (0);
    // 0x285ed0: 0xac4b0034  sw          $t3, 0x34($v0)
    ctx->pc = 0x285ed0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x6BB024u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB024u, _value); } while (0);
    // 0x285ed4: 0xac4c0038  sw          $t4, 0x38($v0)
    ctx->pc = 0x285ed4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x6BB028u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB028u, _value); } while (0);
    // 0x285ed8: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x285ed8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BB02Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB02Cu, _value); } while (0);
    // 0x285edc: 0xac4d0040  sw          $t5, 0x40($v0)
    ctx->pc = 0x285edcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x6BB030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB030u, _value); } while (0);
    // 0x285ee0: 0xac4e0044  sw          $t6, 0x44($v0)
    ctx->pc = 0x285ee0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x6BB034u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB034u, _value); } while (0);
    // 0x285ee4: 0xac4f0048  sw          $t7, 0x48($v0)
    ctx->pc = 0x285ee4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x6BB038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB038u, _value); } while (0);
    // 0x285ee8: 0xac500058  sw          $s0, 0x58($v0)
    ctx->pc = 0x285ee8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6BB048u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB048u, _value); } while (0);
    // 0x285eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285ef0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x285ef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x285ef4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x285ef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285ef8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x285ef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x285efc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x285efcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285f00: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x285f00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x285f04: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x285f04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BB03Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB03Cu, _value); } while (0);
    // 0x285f08: 0xac480050  sw          $t0, 0x50($v0)
    ctx->pc = 0x285f08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x6BB040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB040u, _value); } while (0);
    // 0x285f0c: 0xac490054  sw          $t1, 0x54($v0)
    ctx->pc = 0x285f0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6BB044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB044u, _value); } while (0);
    // 0x285f10: 0x3e00008  jr          $ra
    ctx->pc = 0x285F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F10u;
        // 0x285f14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285F18u;
}
