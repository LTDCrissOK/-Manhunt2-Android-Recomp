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

// Function: sub_0028AF58
// Address: 0x28af58 - 0x28b080
void sub_0028AF58_0x28af58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AF58_0x28af58");
#endif

    switch (ctx->pc) {
        case 0x28b054u: goto label_28b054;
        case 0x28b05cu: goto label_28b05c;
        default: break;
    }

    ctx->pc = 0x28af58u;

    // 0x28af58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28af58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28af5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28af60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28af60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28af64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28af64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28af68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28af68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28af6c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x28af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x28af70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28af70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28af74: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28af74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28af78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28af7c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x28af7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x28af80: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x28af80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x28af84: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x28af84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x28af88: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x28af88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x28af8c: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x28af8cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
    // 0x28af90: 0x3c0b0040  lui         $t3, 0x40
    ctx->pc = 0x28af90u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64 << 16));
    // 0x28af94: 0x3c0c0040  lui         $t4, 0x40
    ctx->pc = 0x28af94u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)64 << 16));
    // 0x28af98: 0x3c0d0040  lui         $t5, 0x40
    ctx->pc = 0x28af98u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)64 << 16));
    // 0x28af9c: 0x3c0e0040  lui         $t6, 0x40
    ctx->pc = 0x28af9cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64 << 16));
    // 0x28afa0: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x28afa0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x28afa4: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x28afa4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x28afa8: 0x2670ac88  addiu       $s0, $s3, -0x5378
    ctx->pc = 0x28afa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945928));
    // 0x28afac: 0xae63ac88  sw          $v1, -0x5378($s3)
    ctx->pc = 0x28afacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BAC88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BAC88u, _value); } while (0);
    // 0x28afb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28afb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28afb4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x28afb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28afb8: 0xac82a50c  sw          $v0, -0x5AF4($a0)
    ctx->pc = 0x28afb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FA50Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA50Cu, _value); } while (0);
    // 0x28afbc: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x28afbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28afc0: 0xaca02c10  sw          $zero, 0x2C10($a1)
    ctx->pc = 0x28afc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C10u, _value); } while (0);
    // 0x28afc4: 0xacc0a510  sw          $zero, -0x5AF0($a2)
    ctx->pc = 0x28afc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA510u, _value); } while (0);
    // 0x28afc8: 0xace0a514  sw          $zero, -0x5AEC($a3)
    ctx->pc = 0x28afc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA514u, _value); } while (0);
    // 0x28afcc: 0xad00a518  sw          $zero, -0x5AE8($t0)
    ctx->pc = 0x28afccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA518u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA518u, _value); } while (0);
    // 0x28afd0: 0xad20a51c  sw          $zero, -0x5AE4($t1)
    ctx->pc = 0x28afd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA51Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA51Cu, _value); } while (0);
    // 0x28afd4: 0xad40a520  sw          $zero, -0x5AE0($t2)
    ctx->pc = 0x28afd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA520u, _value); } while (0);
    // 0x28afd8: 0xad60a524  sw          $zero, -0x5ADC($t3)
    ctx->pc = 0x28afd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA524u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA524u, _value); } while (0);
    // 0x28afdc: 0xad80a528  sw          $zero, -0x5AD8($t4)
    ctx->pc = 0x28afdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA528u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA528u, _value); } while (0);
    // 0x28afe0: 0xada0a52c  sw          $zero, -0x5AD4($t5)
    ctx->pc = 0x28afe0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA52Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA52Cu, _value); } while (0);
    // 0x28afe4: 0xadc0a530  sw          $zero, -0x5AD0($t6)
    ctx->pc = 0x28afe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA530u, _value); } while (0);
    // 0x28afe8: 0xade0a534  sw          $zero, -0x5ACC($t7)
    ctx->pc = 0x28afe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA534u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA534u, _value); } while (0);
    // 0x28afec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x28afecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BAC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BAC90u, _value); } while (0);
    // 0x28aff0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x28aff0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BACA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BACA0u, _value); } while (0);
    // 0x28aff4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x28aff4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BACA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BACA4u, _value); } while (0);
    // 0x28aff8: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x28aff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BADE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADE8u, _value); } while (0);
    // 0x28affc: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x28affcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x6BAC8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BAC8Cu, _value); } while (0);
    // 0x28b000: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x28b000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x6BAC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BAC94u, _value); } while (0);
    // 0x28b004: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x28b004u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BAC9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BAC9Cu, _value); } while (0);
    // 0x28b008: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x28b008u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BAC98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BAC98u, _value); } while (0);
    // 0x28b00c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x28b00cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BACA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BACA8u, _value); } while (0);
    // 0x28b010: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x28b010u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BACACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6BACACu, _value); } while (0);
    // 0x28b014: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x28b014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADACu, _value); } while (0);
    // 0x28b018: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x28b018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADB0u, _value); } while (0);
    // 0x28b01c: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x28b01cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADB4u, _value); } while (0);
    // 0x28b020: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x28b020u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADB8u, _value); } while (0);
    // 0x28b024: 0xa2000138  sb          $zero, 0x138($s0)
    ctx->pc = 0x28b024u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BADC0u, _value); } while (0);
    // 0x28b028: 0xa2000139  sb          $zero, 0x139($s0)
    ctx->pc = 0x28b028u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BADC1u, _value); } while (0);
    // 0x28b02c: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x28b02cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADC4u, _value); } while (0);
    // 0x28b030: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x28b030u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADC8u, _value); } while (0);
    // 0x28b034: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x28b034u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADD0u, _value); } while (0);
    // 0x28b038: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x28b038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADD4u, _value); } while (0);
    // 0x28b03c: 0xae030164  sw          $v1, 0x164($s0)
    ctx->pc = 0x28b03cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BADECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADECu, _value); } while (0);
    // 0x28b040: 0xae030168  sw          $v1, 0x168($s0)
    ctx->pc = 0x28b040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BADF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADF0u, _value); } while (0);
    // 0x28b044: 0xae020170  sw          $v0, 0x170($s0)
    ctx->pc = 0x28b044u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BADF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADF8u, _value); } while (0);
    // 0x28b048: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x28b048u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADF4u, _value); } while (0);
    // 0x28b04c: 0xc0a2bb6  jal         func_28AED8
    ctx->pc = 0x28B04Cu;
    SET_GPR_U32(ctx, 31, 0x28B054u);
    ctx->pc = 0x28B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B04Cu;
    // 0x28b050: 0xae000174  sw          $zero, 0x174($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AED8u, 0x28B04Cu, 0x28B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B054u;
label_28b054:
    // 0x28b054: 0xc0a2c20  jal         func_28B080
    ctx->pc = 0x28B054u;
    SET_GPR_U32(ctx, 31, 0x28B05Cu);
    ctx->pc = 0x28B080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B080u, 0x28B054u, 0x28B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B05Cu;
label_28b05c:
    // 0x28b05c: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x28b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x28b060: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x28b060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x28b064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28b068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28b06c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28b06cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b070: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28b070u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28b074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28b074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b078: 0x3e00008  jr          $ra
    ctx->pc = 0x28B078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B078u;
        // 0x28b07c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B080u;
}
