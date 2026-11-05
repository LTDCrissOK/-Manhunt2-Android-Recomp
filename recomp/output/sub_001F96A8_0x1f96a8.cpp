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

// Function: sub_001F96A8
// Address: 0x1f96a8 - 0x1f97f8
void sub_001F96A8_0x1f96a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F96A8_0x1f96a8");
#endif

    switch (ctx->pc) {
        case 0x1f96e0u: goto label_1f96e0;
        case 0x1f971cu: goto label_1f971c;
        default: break;
    }

    ctx->pc = 0x1f96a8u;

    // 0x1f96a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f96a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f96ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f96acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f96b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f96b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f96b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f96b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f96b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f96bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f96bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f96c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f96c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f96c4: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x1f96c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f96c8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1F96C8u;
    {
        const bool branch_taken_0x1f96c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F96CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96C8u;
        // 0x1f96cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96c8) {
            ctx->pc = 0x1F97D0u;
            goto label_1f97d0;
        }
    }
    ctx->pc = 0x1F96D0u;
    // 0x1f96d0: 0x24120090  addiu       $s2, $zero, 0x90
    ctx->pc = 0x1f96d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f96d4: 0x2413002c  addiu       $s3, $zero, 0x2C
    ctx->pc = 0x1f96d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f96d8: 0x2321018  mult        $v0, $s1, $s2
    ctx->pc = 0x1f96d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f96dc: 0x0  nop
    ctx->pc = 0x1f96dcu;
    // NOP
label_1f96e0:
    // 0x1f96e0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1f96e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f96e4: 0x8c62361c  lw          $v0, 0x361C($v1)
    ctx->pc = 0x1f96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13852)));
    // 0x1f96e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F96E8u;
    {
        const bool branch_taken_0x1f96e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96E8u;
        // 0x1f96ec: 0x2321018  mult        $v0, $s1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96e8) {
            ctx->pc = 0x1F9720u;
            goto label_1f9720;
        }
    }
    ctx->pc = 0x1F96F0u;
    // 0x1f96f0: 0x8c653604  lw          $a1, 0x3604($v1)
    ctx->pc = 0x1f96f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13828)));
    // 0x1f96f4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F96F4u;
    {
        const bool branch_taken_0x1f96f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f96f4) {
            ctx->pc = 0x1F9720u;
            goto label_1f9720;
        }
    }
    ctx->pc = 0x1F96FCu;
    // 0x1f96fc: 0x8c6235b0  lw          $v0, 0x35B0($v1)
    ctx->pc = 0x1f96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13744)));
    // 0x1f9700: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x1f9700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f9704: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1f9704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1f9708: 0x8c434f98  lw          $v1, 0x4F98($v0)
    ctx->pc = 0x1f9708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20376)));
    // 0x1f970c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F970Cu;
    {
        const bool branch_taken_0x1f970c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F970Cu;
        // 0x1f9710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f970c) {
            ctx->pc = 0x1F971Cu;
            goto label_1f971c;
        }
    }
    ctx->pc = 0x1F9714u;
    // 0x1f9714: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F9714u;
    SET_GPR_U32(ctx, 31, 0x1F971Cu);
    ctx->pc = 0x1F9718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9714u;
    // 0x1f9718: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F9714u, 0x1F971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F971Cu;
label_1f971c:
    // 0x1f971c: 0x2321018  mult        $v0, $s1, $s2
    ctx->pc = 0x1f971cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1f9720:
    // 0x1f9720: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x1f9720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x1f9724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9728: 0x240435e3  addiu       $a0, $zero, 0x35E3
    ctx->pc = 0x1f9728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x1f972c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f972cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f9730: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1f9730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f9734: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f9734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9738: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x1f9738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1f973c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1f973cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9740: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1f9740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f9744: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1f9744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f9748: 0xac6435b8  sw          $a0, 0x35B8($v1)
    ctx->pc = 0x1f9748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13752), GPR_U32(ctx, 4));
    // 0x1f974c: 0xac6235b0  sw          $v0, 0x35B0($v1)
    ctx->pc = 0x1f974cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13744), GPR_U32(ctx, 2));
    // 0x1f9750: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1f9750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9754: 0xa06535bc  sb          $a1, 0x35BC($v1)
    ctx->pc = 0x1f9754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13756), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f9758: 0xac6635c4  sw          $a2, 0x35C4($v1)
    ctx->pc = 0x1f9758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13764), GPR_U32(ctx, 6));
    // 0x1f975c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1f975cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9760: 0xac6735d4  sw          $a3, 0x35D4($v1)
    ctx->pc = 0x1f9760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13780), GPR_U32(ctx, 7));
    // 0x1f9764: 0xe46035e0  swc1        $f0, 0x35E0($v1)
    ctx->pc = 0x1f9764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 13792), bits); }
    // 0x1f9768: 0xa0683614  sb          $t0, 0x3614($v1)
    ctx->pc = 0x1f9768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13844), (uint8_t)GPR_U32(ctx, 8));
    // 0x1f976c: 0xa0693628  sb          $t1, 0x3628($v1)
    ctx->pc = 0x1f976cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13864), (uint8_t)GPR_U32(ctx, 9));
    // 0x1f9770: 0xac60360c  sw          $zero, 0x360C($v1)
    ctx->pc = 0x1f9770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13836), GPR_U32(ctx, 0));
    // 0x1f9774: 0xa46035b4  sh          $zero, 0x35B4($v1)
    ctx->pc = 0x1f9774u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 13748), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f9778: 0xac6035c0  sw          $zero, 0x35C0($v1)
    ctx->pc = 0x1f9778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13760), GPR_U32(ctx, 0));
    // 0x1f977c: 0xac6035c8  sw          $zero, 0x35C8($v1)
    ctx->pc = 0x1f977cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13768), GPR_U32(ctx, 0));
    // 0x1f9780: 0xa06035cc  sb          $zero, 0x35CC($v1)
    ctx->pc = 0x1f9780u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13772), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9784: 0xa06035dc  sb          $zero, 0x35DC($v1)
    ctx->pc = 0x1f9784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13788), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9788: 0xac6035d0  sw          $zero, 0x35D0($v1)
    ctx->pc = 0x1f9788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13776), GPR_U32(ctx, 0));
    // 0x1f978c: 0xac60361c  sw          $zero, 0x361C($v1)
    ctx->pc = 0x1f978cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13852), GPR_U32(ctx, 0));
    // 0x1f9790: 0xac603620  sw          $zero, 0x3620($v1)
    ctx->pc = 0x1f9790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13856), GPR_U32(ctx, 0));
    // 0x1f9794: 0xac6035d8  sw          $zero, 0x35D8($v1)
    ctx->pc = 0x1f9794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13784), GPR_U32(ctx, 0));
    // 0x1f9798: 0xac603610  sw          $zero, 0x3610($v1)
    ctx->pc = 0x1f9798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13840), GPR_U32(ctx, 0));
    // 0x1f979c: 0xac6035e4  sw          $zero, 0x35E4($v1)
    ctx->pc = 0x1f979cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13796), GPR_U32(ctx, 0));
    // 0x1f97a0: 0xac603624  sw          $zero, 0x3624($v1)
    ctx->pc = 0x1f97a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13860), GPR_U32(ctx, 0));
    // 0x1f97a4: 0xac603618  sw          $zero, 0x3618($v1)
    ctx->pc = 0x1f97a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13848), GPR_U32(ctx, 0));
    // 0x1f97a8: 0xac6035f0  sw          $zero, 0x35F0($v1)
    ctx->pc = 0x1f97a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13808), GPR_U32(ctx, 0));
    // 0x1f97ac: 0xac6035f4  sw          $zero, 0x35F4($v1)
    ctx->pc = 0x1f97acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13812), GPR_U32(ctx, 0));
    // 0x1f97b0: 0xac6035f8  sw          $zero, 0x35F8($v1)
    ctx->pc = 0x1f97b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13816), GPR_U32(ctx, 0));
    // 0x1f97b4: 0xac603600  sw          $zero, 0x3600($v1)
    ctx->pc = 0x1f97b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13824), GPR_U32(ctx, 0));
    // 0x1f97b8: 0xac603604  sw          $zero, 0x3604($v1)
    ctx->pc = 0x1f97b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13828), GPR_U32(ctx, 0));
    // 0x1f97bc: 0xa0603608  sb          $zero, 0x3608($v1)
    ctx->pc = 0x1f97bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13832), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f97c0: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x1f97c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f97c4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1f97c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f97c8: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1F97C8u;
    {
        const bool branch_taken_0x1f97c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97C8u;
        // 0x1f97cc: 0x2321018  mult        $v0, $s1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97c8) {
            ctx->pc = 0x1F96E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f96e0;
        }
    }
    ctx->pc = 0x1F97D0u;
label_1f97d0:
    // 0x1f97d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f97d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f97d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f97d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f97d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f97d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f97dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f97dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f97e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f97e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f97e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F97E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97E4u;
        // 0x1f97e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F97E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F97ECu;
    // 0x1f97ec: 0x0  nop
    ctx->pc = 0x1f97ecu;
    // NOP
    // 0x1f97f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f97f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f97f4: 0x0  nop
    ctx->pc = 0x1f97f4u;
    // NOP
    ctx->pc = 0x1f97f8u;
}
