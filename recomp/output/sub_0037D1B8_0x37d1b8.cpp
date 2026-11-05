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

// Function: sub_0037D1B8
// Address: 0x37d1b8 - 0x37d2f8
void sub_0037D1B8_0x37d1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D1B8_0x37d1b8");
#endif

    ctx->pc = 0x37d1b8u;

    // 0x37d1b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37d1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37d1bc: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x37d1bcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d1c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37d1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37d1c4: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x37d1c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d1c8: 0x2cc20007  sltiu       $v0, $a2, 0x7
    ctx->pc = 0x37d1c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x37d1cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D1CCu;
    {
        const bool branch_taken_0x37d1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D1CCu;
        // 0x37d1d0: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d1cc) {
            ctx->pc = 0x37D1E0u;
            goto label_37d1e0;
        }
    }
    ctx->pc = 0x37D1D4u;
    // 0x37d1d4: 0x24b9ffed  addiu       $t9, $a1, -0x13
    ctx->pc = 0x37d1d4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967277));
    // 0x37d1d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37D1D8u;
    {
        const bool branch_taken_0x37d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D1D8u;
        // 0x37d1dc: 0x2f390002  sltiu       $t9, $t9, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d1d8) {
            ctx->pc = 0x37D1E4u;
            goto label_37d1e4;
        }
    }
    ctx->pc = 0x37D1E0u;
label_37d1e0:
    // 0x37d1e0: 0x24d9fffa  addiu       $t9, $a2, -0x6
    ctx->pc = 0x37d1e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967290));
label_37d1e4:
    // 0x37d1e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37d1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d1e8: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x37d1e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x37d1ec: 0xb5902  srl         $t3, $t3, 4
    ctx->pc = 0x37d1ecu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 4));
    // 0x37d1f0: 0x3271004  sllv        $v0, $a3, $t9
    ctx->pc = 0x37d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 25) & 0x1F));
    // 0x37d1f4: 0xc72804  sllv        $a1, $a3, $a2
    ctx->pc = 0x37d1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x37d1f8: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x37d1f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x37d1fc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x37d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x37d200: 0xa2182  srl         $a0, $t2, 6
    ctx->pc = 0x37d200u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
    // 0x37d204: 0x1631825  or          $v1, $t3, $v1
    ctx->pc = 0x37d204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x37d208: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x37d208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37d20c: 0x8363c  dsll32      $a2, $t0, 24
    ctx->pc = 0x37d20cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 24));
    // 0x37d210: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x37d210u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x37d214: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x37d214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37d218: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x37d218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x37d21c: 0xb503c  dsll32      $t2, $t3, 0
    ctx->pc = 0x37d21cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) << (32 + 0));
    // 0x37d220: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x37d220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x37d224: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x37d224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37d228: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x37d228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x37d22c: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x37d22cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x37d230: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x37d230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x37d234: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x37d234u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x37d238: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x37d238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x37d23c: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x37d23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x37d240: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x37d240u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x37d244: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x37d244u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x37d248: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x37d248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x37d24c: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x37d24cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x37d250: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x37d250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x37d254: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x37d254u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x37d258: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x37d258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x37d25c: 0x24100053  addiu       $s0, $zero, 0x53
    ctx->pc = 0x37d25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x37d260: 0x3c045100  lui         $a0, 0x5100
    ctx->pc = 0x37d260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20736 << 16));
    // 0x37d264: 0xff030070  sd          $v1, 0x70($t8)
    ctx->pc = 0x37d264u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 3));
    // 0x37d268: 0xff100058  sd          $s0, 0x58($t8)
    ctx->pc = 0x37d268u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 16));
    // 0x37d26c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x37d26cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x37d270: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x37d270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x37d274: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x37d274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x37d278: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x37d278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x37d27c: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x37d27cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x37d280: 0x94b7c  dsll32      $t1, $t1, 13
    ctx->pc = 0x37d280u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 13));
    // 0x37d284: 0x35290004  ori         $t1, $t1, 0x4
    ctx->pc = 0x37d284u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
    // 0x37d288: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x37d288u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x37d28c: 0x240d0050  addiu       $t5, $zero, 0x50
    ctx->pc = 0x37d28cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x37d290: 0x240e0051  addiu       $t6, $zero, 0x51
    ctx->pc = 0x37d290u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x37d294: 0x240f0052  addiu       $t7, $zero, 0x52
    ctx->pc = 0x37d294u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x37d298: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x37d298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
    // 0x37d29c: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x37d29cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x37d2a0: 0xff050000  sd          $a1, 0x0($t8)
    ctx->pc = 0x37d2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 5));
    // 0x37d2a4: 0x27030070  addiu       $v1, $t8, 0x70
    ctx->pc = 0x37d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 112));
    // 0x37d2a8: 0xaf080008  sw          $t0, 0x8($t8)
    ctx->pc = 0x37d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 8));
    // 0x37d2ac: 0xaf04000c  sw          $a0, 0xC($t8)
    ctx->pc = 0x37d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 4));
    // 0x37d2b0: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x37d2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d2b4: 0xff090010  sd          $t1, 0x10($t8)
    ctx->pc = 0x37d2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 9));
    // 0x37d2b8: 0xff0c0018  sd          $t4, 0x18($t8)
    ctx->pc = 0x37d2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 12));
    // 0x37d2bc: 0xff0d0028  sd          $t5, 0x28($t8)
    ctx->pc = 0x37d2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 40), GPR_U64(ctx, 13));
    // 0x37d2c0: 0xff060020  sd          $a2, 0x20($t8)
    ctx->pc = 0x37d2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 6));
    // 0x37d2c4: 0xff0e0038  sd          $t6, 0x38($t8)
    ctx->pc = 0x37d2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 14));
    // 0x37d2c8: 0xff0f0048  sd          $t7, 0x48($t8)
    ctx->pc = 0x37d2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 15));
    // 0x37d2cc: 0xff070040  sd          $a3, 0x40($t8)
    ctx->pc = 0x37d2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 7));
    // 0x37d2d0: 0xff0a0060  sd          $t2, 0x60($t8)
    ctx->pc = 0x37d2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 10));
    // 0x37d2d4: 0xff000030  sd          $zero, 0x30($t8)
    ctx->pc = 0x37d2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 0));
    // 0x37d2d8: 0xff000050  sd          $zero, 0x50($t8)
    ctx->pc = 0x37d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 0));
    // 0x37d2dc: 0xff000068  sd          $zero, 0x68($t8)
    ctx->pc = 0x37d2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 0));
    // 0x37d2e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37d2e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d2e4: 0xac6b000c  sw          $t3, 0xC($v1)
    ctx->pc = 0x37d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 11));
    // 0x37d2e8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x37d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x37d2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x37D2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D2ECu;
        // 0x37d2f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D2F4u;
    // 0x37d2f4: 0x0  nop
    ctx->pc = 0x37d2f4u;
    // NOP
    ctx->pc = 0x37d2f8u;
}
