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

// Function: sub_003B0000
// Address: 0x3b0000 - 0x3b00f8
void sub_003B0000_0x3b0000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0000_0x3b0000");
#endif

    switch (ctx->pc) {
        case 0x3b00ccu: goto label_3b00cc;
        case 0x3b00d0u: goto label_3b00d0;
        default: break;
    }

    ctx->pc = 0x3b0000u;

    // 0x3b0000: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x3b0000u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x3b0004: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x3b0004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3b0008: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x3b0008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x3b000c: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x3b000cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x3b0010: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x3b0010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x3b0014: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3b0014u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3b0018: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3b0018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3b001c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3b001cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3b0020: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b0020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b0024: 0x20d6021  addu        $t4, $s0, $t5
    ctx->pc = 0x3b0024u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x3b0028: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3b0028u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3b002c: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x3b002cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x3b0030: 0x91480001  lbu         $t0, 0x1($t2)
    ctx->pc = 0x3b0030u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x3b0034: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3b0034u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3b0038: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x3b0038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3b003c: 0xee3824  and         $a3, $a3, $t6
    ctx->pc = 0x3b003cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 14));
    // 0x3b0040: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x3b0040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3b0044: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x3b0044u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x3b0048: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x3b0048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3b004c: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x3b004cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x3b0050: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x3b0050u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x3b0054: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x3b0054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x3b0058: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3b0058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3b005c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3b005cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3b0060: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3b0060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3b0064: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b0064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b0068: 0xa6c80000  sh          $t0, 0x0($s6)
    ctx->pc = 0x3b0068u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x3b006c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x3b006cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x3b0070: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x3b0070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3b0074: 0x43203  sra         $a2, $a0, 8
    ctx->pc = 0x3b0074u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x3b0078: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x3b0078u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3b007c: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x3b007cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x3b0080: 0x41e02  srl         $v1, $a0, 24
    ctx->pc = 0x3b0080u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x3b0084: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x3b0084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x3b0088: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3b0088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3b008c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3b008cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x3b0090: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b0090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b0094: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3b0094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3b0098: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x3b0098u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x3b009c: 0x8da40004  lw          $a0, 0x4($t5)
    ctx->pc = 0x3b009cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3b00a0: 0x43203  sra         $a2, $a0, 8
    ctx->pc = 0x3b00a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x3b00a4: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x3b00a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3b00a8: 0x41e02  srl         $v1, $a0, 24
    ctx->pc = 0x3b00a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x3b00ac: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3b00acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3b00b0: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x3b00b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x3b00b4: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x3b00b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x3b00b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b00b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b00bc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x3b00bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b00c0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3b00c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x3b00c4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3b00c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3b00c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3b00c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3b00cc:
    // 0x3b00cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b00ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b00d0:
    // 0x3b00d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3b00d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b00d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b00d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b00d8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3b00d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b00dc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3b00dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b00e0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3b00e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3b00e4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3b00e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b00e8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3b00e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3b00ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b00ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b00f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B00F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B00F0u;
        // 0x3b00f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B00F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B00F8u;
}
